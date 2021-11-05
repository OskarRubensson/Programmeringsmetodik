#include "int_buffer.h"
#include <iterator>
#include <algorithm>

int_buffer::int_buffer(size_t size) // Default construct
    :_buffer(new int[size]), _size(size) 
{};

int_buffer::int_buffer(const int* source, size_t size) // Resize construct
    :_buffer(new int[size]), _size(size)
{
    std::copy(source, source+size, _buffer);
};

int_buffer::int_buffer(const int_buffer& rhs) // Copy construct
    :_buffer(new int[rhs.size()]), _size(rhs.size())
{
    std::copy(rhs.begin(), rhs.end(), begin());
};

int_buffer::int_buffer( int_buffer&& rhs ) // Move construct
    :_size(rhs.size())
{
    std::copy(rhs.begin(), rhs.end(), begin());
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
};