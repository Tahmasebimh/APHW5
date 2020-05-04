
#ifndef APQUEUE_H
#define APQUEUE_H


#include <vector>

template <class T> class APQueue{

public:
    APQueue(std::vector<T> );
    APQueue(const APQueue&);
    APQueue * enqueue( T t);
    ~APQueue();
    APQueue<T> &operator=(const APQueue&);
    void show();
    T dequeue();
    T &operator[](const size_t &a) const ;

private:
    size_t size{};
    class Item{
    public:
        Item* pnext = nullptr;
        T*  pvalue = nullptr;
        Item(T &pvalue) : pvalue(&pvalue) , pnext(nullptr) {}
    };
    Item* phead = nullptr;
    Item* ptail = nullptr;
};



#include "apqueue.hpp"
#endif