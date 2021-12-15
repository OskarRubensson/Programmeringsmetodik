#include <iostream>
#include <ctime>
#include <iomanip>
#include "p_queue.h"

struct order{
    std::string broker;
    unsigned int  price;

    order(unsigned int price, std::string broker): broker(broker), price(price) {}
};

struct less {
    bool operator()(const order& o1, const order& o2){
        return o1.price < o2.price;
    }
};

void printTableRow(order buyOrder, order sellOrder);
void printTableHead();

void printTableHead(){
    const int width = 18;
    std::cout << std::left << std::setw(width) << std::setfill(' ') << "Seller";
    std::cout << std::left << std::setw(width) << std::setfill(' ') << "Buyer";
    std::cout << std::left << std::setw(width) << std::setfill(' ') << "Price";
    std::cout << std::endl;
}

void printTableRow(order buyOrder, order sellOrder){
    const int width = 18;
    std::string currency = " kr";

    std::cout << std::left << std::setw(width) << std::setfill(' ') << buyOrder.broker;
    std::cout << std::left << std::setw(width) << std::setfill(' ') << sellOrder.broker;
    std::cout << buyOrder.price;
    std::cout << currency;
    std::cout << std::endl;
}

int main() {
    srand(time(NULL));
    p_queue<order, less> buyOrders;
    p_queue<order, less> sellOrders;

    size_t orders = 21;
    size_t price_lower = 15;
    size_t price_upper = 30;

    //
    for(int i = 0; i < orders; i++){
        std::string broker_name;
        if (i % 3 == 0)
            broker_name = "Erik Pendel";
        else if (i % 3 == 1)
            broker_name = "Jarl Wallenburg";
        else
            broker_name = "Joakim Von Anka";

        sellOrders.push(order(rand() % (price_upper - price_lower) + price_lower, broker_name));
        buyOrders.push(order(rand() % (price_upper - price_lower) + price_lower, broker_name));
    }

    printTableHead();
    while(!buyOrders.empty() && !sellOrders.empty()){
        if (buyOrders.top().price >= sellOrders.top().price){
            order buyOrder = buyOrders.pop();
            order sellOrder = sellOrders.pop();

            printTableRow(buyOrder, sellOrder);
        } else
            buyOrders.pop();
    }

    return 0;
}
