// Labb3, Programmeringsmetodik
// Oskar Rubensson (osru1900)
// P_queue.h, 2021-12-07 - 2021-12-07
// kortfattat vad filen innehåller

//
// Created by oskar231@hotmail.com on 2021-12-07.
//

#ifndef LABB3_P_QUEUE_H
#define LABB3_P_QUEUE_H

#include <vector>
#include <algorithm>

template<typename T, typename Comp>
class p_queue {
private:
    std::vector<T> list;

    // Same way std::less is implemented
    struct less {
        T value;

        less(const T& value): value(value) {}

        bool operator()(const T& compEl) const {
            Comp comp;
            return comp(value, compEl);
        }
    };

public:
    p_queue() = default;

    T pop(){
        T element = list.front();
        list.erase(list.begin());
        return element;
    }

    void push(T e){
        auto insertion_point = std::find_if(list.begin(), list.end(), less(e));
        list.insert(insertion_point, e);
    }

    T top(){
      return list.front();
    }

    size_t size() const{
        return list.size();
    }

    bool empty() const {
        return list.empty();
    }
};


#endif //LABB3_P_QUEUE_H
