// Labb1, Programmeringsmetodik
// Oskar Rubensson (osru1900)
// int_buffer.cpp, 2021-11-10 - 2021-11-24
// Contains the implementation for int_buffer's-functions

#include "int_buffer.h"
#include <algorithm>

int_buffer::int_buffer(size_t size) // Default construct
    :_buffer(new int[size]), _size(size) 
{}

int_buffer::int_buffer(const int* source, size_t size) // Resize construct
    : int_buffer(size)
{
    std::copy(source, source+size, _buffer);
}

int_buffer::int_buffer(const int_buffer& rhs) // Copy construct
    : int_buffer(rhs.begin(), rhs.size())
{

}

int_buffer::int_buffer( int_buffer&& rhs ) noexcept // Move construct
    :_size(rhs._size), _buffer(rhs._buffer)
{
    rhs._size = 0;
    rhs._buffer = nullptr;
}

int_buffer& int_buffer::operator=( const int_buffer& rhs ) // Copy assign
{
    int_buffer tmp = int_buffer(rhs);
    swap(tmp);

    return *this;
}

int_buffer& int_buffer::operator=( int_buffer&& rhs ) noexcept // Move assign
{
    swap(rhs);

    return *this;
}

int& int_buffer::operator[]( int index ) // Get at index
{
    return *std::next(begin(), index);
}

const int& int_buffer::operator[]( int index ) const // Get at index (const)
{
    return *(_buffer+index);
}

size_t int_buffer::size() const // Get size
{
    return _size;
}

int* int_buffer::begin() // Get pointer at first element
{
    return _buffer;
}

int* int_buffer::end() // Get pointer at last element
{
    return _buffer+_size;
}

const int* int_buffer::begin() const // Get pointer at first element (const)
{
    return _buffer;
}

const int* int_buffer::end() const // Get pointer at last element (const)
{
    return _buffer+_size;
}

int_buffer::~int_buffer() // Destructor - For all elements
{
    if (_buffer != nullptr)
        delete[] _buffer;
}

void int_buffer::swap(int_buffer& buf)
{
    std::swap(buf._buffer, _buffer);
    std::swap(buf._size, _size);
}

void int_buffer::push_back(int value)
{
    // Declarations
    int_buffer temp_buffer(begin(),size() + 1 );
    temp_buffer[temp_buffer.size() - 1] = value;
    swap(temp_buffer);
}