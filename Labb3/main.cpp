#include <iostream>
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
    p_queue<order, less> buyOrders;
    p_queue<order, less> sellOrders;


    return 0;

    return 0;
}
