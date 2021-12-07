#include <iostream>
#include <ctime>
#include "p_queue.h"

struct order{
    std::string broker;
    unsigned int  price;

    order(unsigned int price, std::string broker): broker(broker), price(price) {}
};

/* Less must be a type, so we use a struct instead as in p_queue
auto less = [](order o1, order o2)->bool{
    return o1.price < o2.price;
}; */
struct less {
    bool operator()(const order& o1, const order& o2){
        return o1.price < o2.price;
    }
};

int main() {
    srand(time(NULL));
    p_queue<order, less> buyOrders;
    p_queue<order, less> sellOrders;

    size_t orders = 21;
    size_t price_lower = 15;
    size_t price_upper = 30;
    std::string currency = "kr";

    //
    for(int i = 0; i < orders; i++){
        if (i % 3 == 0){
            sellOrders.push(order(rand() % (price_upper - price_lower) + price_lower, "Erik Pendel"));
            buyOrders.push(order(rand() % (price_upper - price_lower) + price_lower, "Erik Pendel"));
        }
        else if (i % 3 == 1){
            sellOrders.push(order(rand() % (price_upper - price_lower) + price_lower, "Erik Pendel"));
            buyOrders.push(order(rand() % (price_upper - price_lower) + price_lower, "Jarl Wallenburg"));
        }
        else if (i % 3 == 2){
            sellOrders.push(order(rand() % (price_upper - price_lower) + price_lower, "Erik Pendel"));
            buyOrders.push(order(rand() % (price_upper - price_lower) + price_lower, "Joakim von Anka"));
        }
    }

    while(!buyOrders.empty() && !sellOrders.empty()){
        if (buyOrders.top().price >= sellOrders.top().price){
            order buyOrder = buyOrders.pop();
            order sellOrder = sellOrders.pop();

            std::cout << buyOrder.broker << " bought from " << sellOrder.broker << " for " << buyOrder.price << std::endl;
        } else
            buyOrders.pop();
    }

    return 0;
}
