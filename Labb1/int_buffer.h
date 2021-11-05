#ifndef INTBUFFER_H
#define INTBUFFER_H

#include <cstdlib> // size_t
#include <iterator>

struct int_node {
    int value;
    int* next;
};

class int_buffer {
    private:
        int* _buffer = nullptr;
        size_t _size = 0;
    public:
        explicit int_buffer( size_t size );                 // Default construct
        int_buffer( const int* source , size_t size );      // Resize construct
        int_buffer( const int_buffer& rhs );                // Copy construct
        int_buffer( int_buffer&& rhs );                     // Move construct
        int_buffer& operator=( const int_buffer& rhs );     // Copy assign
        int_buffer& operator=( int_buffer&& rhs );          // Move assign
        int& operator[]( size_t index );                    // Get at index
        const int& operator[]( size_t index ) const;        // Get at index (const)
        size_t size() const;                                // Get size
        
        int* begin();                                       // Get pointer at first element
        int* end();                                         // Get pointer at last element
        const int* begin() const;                           // Get ponter at first element (const)
        const int* end() const;                             // Get pointer at last element (const)
        ~int_buffer();                                      // Destructor - For all elements
};

#endif /* INTBUFFER_H */