#include <iostream>
#include "Mailbox.h"

template<typename T>
void show(const std::vector<T>& elements){
    for(auto e: elements){
        std::cout << e;
    }
    std::cout << std::endl;
}

int main() {
    Mailbox inbox;

    inbox.push_back(Email("Oskar", "2021-12-08", "Lab 1"));
    inbox.push_back(Email("Anders", "2021-12-07", "Lab 2"));
    inbox.push_back(Email("Bertil", "2021-12-07", "Lab 3"));
    inbox.push_back(Email("Carl", "2021-12-06", "Lab 1"));
    inbox.push_back(Email("David", "2021-11-02", "Lab 5"));

    inbox.sortDate();
    show(inbox.emails());
    return 0;
}
