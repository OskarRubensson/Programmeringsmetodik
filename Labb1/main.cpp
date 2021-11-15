#include <iostream>
#include <ctime>
#include "int_buffer.h"
#include "int_sorted.h"

void f(int_buffer buf);
void random_insert(size_t elements, int max, int min);
void print_buffer(const int* start, const int* stop);

int main()
{
    srand(time(nullptr));
    f(int_buffer(10));
    random_insert(10, 100, 0);
}

void f(int_buffer buf)
{
        // Declare values for int_buffer
    int val = 1;
    for (int* i = buf.begin(); i != buf.end(); i++, val++) {
        *i = val;
    }
}


void random_insert(size_t elements, int max, int min)
{
    int_sorted sorted = int_sorted(nullptr, 0);

    for(size_t counter = 0; counter < elements; counter++)
        sorted.insert(rand() % max + min);

    std::cout << "---- Print Sorted -----" << std::endl;
    print_buffer(sorted.begin(), sorted.end());
}

void print_buffer(const int* start, const int* stop)
{
    for (const int *i = start; i != stop; i++) {
        std::cout << *i << ", ";
    }
    std::cout << std::endl;
}
