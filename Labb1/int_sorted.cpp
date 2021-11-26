// Labb1, Programmeringsmetodik
// Oskar Rubensson (osru1900)
// int_sorted.cpp, 2021-11-10 - 2021-11-22
// Contains the implementation for int_sorted's functions

#include "int_sorted.h"
#include <iostream>

/*
 * Sort a buffer using a Divide-&-conquer algorithm (merge-sort)
 * 1. Recursively divide the buffer until we reach buffers of size 1
 * 2. Merge them in a sorted manner until we have one big large sorted buffer
 * This is done by first making sorted pairs, then sorted elements of size 4, 8, 16 etc.
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

int_sorted::int_sorted(const int* source, size_t size)
    :_buffer(int_buffer(source, size))
{
    if (size > 1)
        _buffer = sort(begin(), end())._buffer;
}

size_t int_sorted::size() const // Get buffer-size
{
    return _buffer.size();
}

int* int_sorted::insert(int value) // Returns the insertion point
{
        // Declarations
    int_buffer temp_buffer(size() + 1);
    int* iter = _buffer.begin();
    int* insertion_point = temp_buffer.begin();
    bool found_insert = false;

        // Loop through both temp_buffer and _buffer simultaneously
    for (int* temp_iter = temp_buffer.begin(); iter != _buffer.end(); iter++, temp_iter++) {
            // Move along insertion_point until the insertion-point is found
        if (*iter < value) {
            insertion_point++;
        } else if(!found_insert) {
            // Insertion-point found, take _buffers-pointer back one step to accumulate for its smaller size
            found_insert = true;
            iter--;
        }
            // Copy value from _buffer to temp_buffer
        *temp_iter = *iter;
    }

        // Now change the insertion_points value to the insert-value
    *insertion_point = value;

        // Reassign _buffer to temp_buffer
    _buffer = std::move(temp_buffer);

    return insertion_point;
}

const int* int_sorted::begin() const // Get pointer at first element (const)
{
    return _buffer.begin();
}

const int* int_sorted::end() const // Get pointer at last element (const)
{
    return _buffer.end();
}

int_sorted int_sorted::merge(const int_sorted& merge_with) const // Returns merged version of the two int_buffers
{
    int_buffer merged(size() + merge_with.size());
    const int* pointer_a = begin();
    const int* pointer_b = merge_with.begin();

    for(auto& it : merged) {
        if (pointer_a != end() && (*pointer_a < *pointer_b || pointer_b == merge_with.end())) {
            it = *pointer_a;
            pointer_a++;
        } else if (pointer_b != merge_with.end()) {
            it = *pointer_b;
            pointer_b++;
        }
    }
    int_sorted s1(nullptr, 0);
    s1._buffer = merged;
    return s1;
}

