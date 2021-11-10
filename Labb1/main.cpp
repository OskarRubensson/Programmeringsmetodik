#include <iostream>
#include "int_buffer.h"

void f(int_buffer buf);

int main()
{

    f(int_buffer(10));
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