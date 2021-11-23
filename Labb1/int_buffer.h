// Labb1, Programmeringsmetodik
// Oskar Rubensson (osru1900)
// int_buffer.h, 2021-11-22 - 2021-11-22
// Contains the definition for int_buffer


#ifndef INTBUFFER_H
#define INTBUFFER_H

#include <cstdlib> // size_t

class int_buffer {
    private:
        int* _buffer = nullptr;
        size_t _size = 0;

        void swap(int_buffer& buf);                         // Swap two int_buffers members
    public:
    
        int_buffer() = delete;                              // Remove default-constructor
        explicit int_buffer( size_t size );                 // Default construct
        int_buffer( const int* source , size_t size );      // Resize construct
        int_buffer( const int_buffer& rhs );                // Copy construct
        int_buffer( int_buffer&& rhs ) noexcept;            // Move construct
        int_buffer& operator=( const int_buffer& rhs );     // Copy assign
        int_buffer& operator=( int_buffer&& rhs ) noexcept; // Move assign
        int& operator[]( size_t index );                    // Get at index
        const int& operator[]( size_t index ) const;        // Get at index (const)
        [[nodiscard]]size_t size() const;                   // Get size
        void push_back(int value);                          // Push element at last-index
        
        int* begin();                                       // Get pointer at first element
        int* end();                                         // Get pointer at last element
        [[nodiscard]]const int* begin() const;              // Get pointer at first element (const)
        [[nodiscard]]const int* end() const;                // Get pointer at last element (const)
        ~int_buffer();                                      // Destructor - For all elements
};

#endif /* INTBUFFER_H */