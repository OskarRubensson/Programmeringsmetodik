#include <iostream>
#include <ctime>
#include "int_buffer.h"
#include "int_sorted.h"

void f(int_buffer buf);
void random_insert(size_t elements=10, int max=100, int min=0);

int main()
{
    srand(time(NULL));
    f(int_buffer(10));
    random_insert(100, 100, 0);
}

void f(int_buffer buf)
{
        // Declare values for int_buffer
    int val = 1;
    for (int* i = buf.begin(); i != buf.end(); i++, val++) {
        *i = val;
    }

        // Print int_buffer
    for (const int* i = buf.begin(); i != buf.end(); i++) {
        std::cout << *i << std::endl;
    }
}


void random_insert(size_t elements, int max, int min)
{
    int_sorted sorted = int_sorted(nullptr, 0);

    for(size_t counter = 0; counter <= elements; counter++) {
        sorted.insert(rand() % max);
    }
    std::cout << "---- Print Sorted -----" << std::endl;
        // Print int_buffer
    sorted.print();
}