// Labb1, Programmeringsmetodik
// Oskar Rubensson (osru1900)
// main.cpp, 2021-11-22 - 2021-11-22
// The main-function and other unspecified functions.

#include <iostream>
#include <ctime>
#include "int_buffer.h"
#include "int_sorted.h"

void f(int_buffer buf);
int_sorted random_insert(size_t elements, int min, int max);
int_buffer random_buffer(size_t elements, int min, int max);
void print_buffer(const int* start, const int* stop);
int_sorted sort(const int* begin, const int* end);

int main()
{
    srand(time(nullptr));
    //f(int_buffer(10));
    int_sorted s1 = random_insert(100, 0, 100);
    int_buffer buf = random_buffer(100, 0, 1000);
    int_sorted s2 = sort(buf.begin(), buf.end());
    std::cout << "-------- After Sort ---------" << std::endl;
    print_buffer(s2.begin(), s2.end());
}

/*
 * Fill buffer with linear-increasing values
 */
void f(int_buffer buf)
{
        // Declare values for int_buffer
    int val = 1;
    for (int* i = buf.begin(); i != buf.end(); i++, val++) {
        *i = val;
    }
}

/*
 * Insert certain amount of elements to a sorted buffer
 */
int_sorted random_insert(size_t elements, int min, int max)
{
    int_sorted sorted = int_sorted(nullptr, 0);

    for(size_t counter = 0; counter < elements; counter++)
        sorted.insert(rand() % max + min);

    std::cout << "---- Print Sorted -----" << std::endl;
    print_buffer(sorted.begin(), sorted.end());

    return sorted;
}

/*
 * Create a random buffer of certain size and value-range
 */
int_buffer random_buffer(size_t elements, int min, int max)
{
    int_buffer buf = int_buffer(nullptr, 0);

    for(size_t counter = 0; counter < elements; counter++)
        buf.push_back(rand() % max + min);

    std::cout << "---- Print Buffer -----" << std::endl;
    print_buffer(buf.begin(), buf.end());

    return buf;
}
/*
 * Sort a buffer using a Divide-&-conquer algorithm
 */
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

/*
 * Print values from begin to end
 */
void print_buffer(const int* begin, const int* end)
{
    for (const int *i = begin; i != end; i++) {
        std::cout << *i << ", ";
    }
    std::cout << std::endl;
}
