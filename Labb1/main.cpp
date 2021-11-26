// Labb1, Programmeringsmetodik
// Oskar Rubensson (osru1900)
// main.cpp, 2021-11-10 - 2021-11-24
// The main-function and other unspecified functions.

#include <iostream>
#include <ctime>
#include "int_buffer.h"
#include "int_sorted.h"

void f(int_buffer buf);
int_sorted random_insert(size_t elements, int min, int max);
int_buffer random_buffer(size_t elements, int min, int max);
void print_buffer(const int* begin, const int* end);

int main()
{
    srand(time(nullptr));

    f(int_buffer(10)); // Default constructor is used

    int_sorted s1 = random_insert(100, 0, 100);
    const int_buffer buf = random_buffer(100, 0, 1000);
    int_sorted s2(buf.begin(), buf.size());
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
        // Non-constant version of begin() & end() is used
    for (int* i = buf.begin(); i != buf.end(); i++, val++) {
        *i = val;
    }

        // Non-constant here as well
    for (const int* i = buf.begin(); i != buf.end(); i++) {
        std::cout << *i << ", ";
    }
    std::cout << std::endl;

    /*
     * Range-based for-loop is valid
    for (auto e : buf) {
        std::cout << e << ", ";
    }
    std::cout << std::endl;
    */

    // In order to call the const-version the buffer-object needs to be constant
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
 * Print values from begin to end
 */
void print_buffer(const int* begin, const int* end)
{
    for (const int *i = begin; i != end; i++) {
        std::cout << *i << ", ";
    }
    std::cout << std::endl;
}
