#include "int_sorted.h"

int_sorted::int_sorted(const int* source, size_t size)
    :_buffer(int_buffer(source, size))
{}

size_t int_sorted::size() const // Get buffer-size
{
    return _buffer.size();
}

int* int_sorted::insert(int value) // Returns the insertion point
{
        // Create temporary buffer
    int_buffer temp_buffer(size() + 1);
    /*int* insertion_point = temp_buffer.begin();

        // Find insertion point for value
    for (const int* iter = _buffer.begin(); iter != _buffer.end(); iter++) {
        if (*iter > value)
            break;
        
        insertion_point++;
    }

        // Insertion_point is now pointing where it should be inserted
    *insertion_point = value;
    
        // Iterate temp_buffer and _buffer
        // Copy values from _buffer -> temp_buffer, skipping the point where we just inserted the new value
    int* temp_iter = temp_buffer.begin();
    for (const int* iter = begin(); iter != end(); ++iter, ++temp_iter) {
        if (temp_iter == insertion_point) 
            temp_iter++;

        *temp_iter = *iter;
    }
*/
    int* temp_iter = temp_buffer.begin();
    int* insertion_point = nullptr;
    for (int* iter = _buffer.begin(); iter != end() && temp_iter != temp_buffer.end(); ++iter, ++temp_iter) {
        if (insertion_point != nullptr && *iter > value) {
            *temp_iter = value;
            insertion_point = iter;
            --iter;
        } else {
            *temp_iter = *iter;
        }
    }

    std::cout << "---- _buffer ------" << std::endl;
    _buffer.print();

    std::cout << "---- temp_buffer ------" << std::endl;
    temp_buffer.print();

        // Reassign _buffer to temp_buffer
    _buffer = std::move(temp_buffer);

    return insertion_point;
}

const int* int_sorted::begin() const // Get ponter at first element (const)
{
    return _buffer.begin();
}

const int* int_sorted::end() const // Get pointer at last element (const)
{
    return _buffer.end();
}

int_sorted int_sorted::merge(const int_sorted& merge_with) const // Returns merged version of the two int_buffers
{

}

void int_sorted::print() const {
    for (const int* i = begin(); i != end(); i++) {
        std::cout << *i << " ";
    }
    std::cout << std::endl;
}
