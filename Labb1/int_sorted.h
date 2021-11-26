// Labb1, Programmeringsmetodik
// Oskar Rubensson (osru1900)
// int_sorted.h, 2021-11-10 - 2021-11-22
// Contains the definition for int_sorted

#ifndef INTSORTED_H
#define INTSORTED_H

#include "int_buffer.h"
#include <cstdlib> // size_t

class int_sorted {
    private:
        int_buffer _buffer;
    public:
    
        int_sorted() = delete;                                              // Remove default constructor
        explicit int_sorted(const int* source, size_t size);                // Default constructor
        size_t size() const;                                                // Get buffer-size
        int* insert(int value);                                             // Insert element to buffer, Returns the insertion point
        const int* begin() const;                                           // Get pointer at first element (const)
        const int* end() const;                                             // Get pointer at last element (const)
        [[nodiscard]]int_sorted merge(const int_sorted& merge_with) const;  // Returns merged version of the two int_buffers
};

#endif /* INTSORTED_H */