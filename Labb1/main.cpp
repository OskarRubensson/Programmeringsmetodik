#include <iostream>
#include <ctime>
#include "int_buffer.h"
#include "int_sorted.h"
#include <chrono>

typedef void (* sortFunction)(int* begin, int* end);

void f(int_buffer buf);
int_sorted random_insert(size_t elements, int min, int max);
void print_buffer(const int* start, const int* stop);
double time_sort(sortFunction sort);
int_sorted sort(const int* begin, const int* end);
int_sorted insertion_sort(const int* begin, const int* end);

int main()
{
    srand(time(nullptr));
    // f(int_buffer(10));
    // int_sorted s1 = random_insert(100, 0, 100);

}

void f(int_buffer buf)
{
        // Declare values for int_buffer
    int val = 1;
    for (int* i = buf.begin(); i != buf.end(); i++, val++) {
        *i = val;
    }
}


int_sorted random_insert(size_t elements, int min, int max)
{
    int_sorted sorted = int_sorted(nullptr, 0);

    for(size_t counter = 0; counter < elements; counter++)
        sorted.insert(rand() % max + min);

    std::cout << "---- Print Sorted -----" << std::endl;
    print_buffer(sorted.begin(), sorted.end());

    return sorted;
}

int_sorted sort(const int* begin, const int* end)
{
    if ( begin == end )
        return int_sorted (nullptr,0) ;
    if ( begin == end - 1 )
        return int_sorted ( begin , 1) ;

    ptrdiff_t half = ( end - begin ) / 2; // pointer diff type
    const int * mid = begin + half ;
    return sort(begin, mid).merge(sort(mid, end));
}

int_sorted insertion_sort(const int* begin, const int* end)
{
    int_buffer sorted_buf(std::distance(begin, end));

        // Loop each value from being->end
    int index = 0;
    for (const int* it = begin; it < end; it++, index++) {
            // Find min-value
        int min = *begin;
        for(const int* i = it; i != end; i++) {
            if (*i < min)
                min = *i;
        }

            // Insert into sorted_buf
        sorted_buf[index] = *it;
    }

    return int_sorted(sorted_buf.begin(), sorted_buf.size());
}

void print_buffer(const int* begin, const int* end)
{
    for (const int *i = begin; i != end; i++) {
        std::cout << *i << ", ";
    }
    std::cout << std::endl;
}
