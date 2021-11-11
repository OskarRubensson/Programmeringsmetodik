#include "int_buffer.h"
#include <iterator>
#include <algorithm>

int_buffer::int_buffer(size_t size) // Default construct
    :_buffer(new int[size]), _size(size) 
{}

int_buffer::int_buffer(const int* source, size_t size) // Resize construct
    :_buffer(new int[size]), _size(size)
{
    std::copy(source, source+size, _buffer);
}

int_buffer::int_buffer(const int_buffer& rhs) // Copy construct
    :_buffer(new int[rhs.size()]), _size(rhs.size())
{
    std::copy(rhs.begin(), rhs.end(), begin());
}

int_buffer::int_buffer( int_buffer&& rhs ) // Move construct
    :_size(rhs.size()), _buffer(rhs._buffer)
{
        // Reset rhs
    rhs._size = 0;
    rhs._buffer = nullptr;
}

int_buffer& int_buffer::operator=( const int_buffer& rhs ) // Copy assign
{
    std::copy(rhs.begin(), rhs.end(), begin());
    _size = rhs.size();
}

int_buffer& int_buffer::operator=( int_buffer&& rhs ) // Move assign
{
    _buffer = rhs.begin();
    _size = rhs.size();
}

int& int_buffer::operator[]( size_t index ) // Get at index
{
    if(index >= _size)
        throw std::out_of_range("Index is out of range!");
    
    return *std::next(begin(), index);
}

const int& int_buffer::operator[]( size_t index ) const // Get at index (const)
{
    if(index >= _size)
        throw std::out_of_range("Index is out of range!");
    
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

const int* int_buffer::begin() const // Get ponter at first element (const)
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

void int_buffer::print() const {
    for (const int* i = begin(); i != end(); i++) {
        std::cout << *i << ' ';
    }
    std::cout << std::endl;
}
