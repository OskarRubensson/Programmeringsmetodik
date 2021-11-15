#ifndef INTBUFFER_H
#define INTBUFFER_H

#include <cstdlib> // size_t
#include <iostream>
#include <iterator>

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
        int_buffer( int_buffer&& rhs ) noexcept;             // Move construct
        int_buffer& operator=( const int_buffer& rhs );     // Copy assign
        int_buffer& operator=( int_buffer&& rhs ) noexcept; // Move assign
        int& operator[]( size_t index );                    // Get at index
        const int& operator[]( size_t index ) const;        // Get at index (const)
        [[nodiscard]]size_t size() const;                   // Get size
        
        int* begin();                                       // Get pointer at first element
        int* end();                                         // Get pointer at last element
        [[nodiscard]]const int* begin() const;              // Get pointer at first element (const)
        [[nodiscard]]const int* end() const;                // Get pointer at last element (const)
        ~int_buffer();                                      // Destructor - For all elements
};

#endif /* INTBUFFER_H */