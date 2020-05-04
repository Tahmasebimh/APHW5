


#include <iostream>
#include "apqueue.h"

template<class T>
APQueue<T>::APQueue(std::vector<T> v) {
    size = v.size();
    for (size_t i = 0; i < v.size(); ++i) {
        enqueue(v[i]);
    }
}

template<class T>
APQueue<T> *APQueue<T>::enqueue(T t) {
    size++;
    T *_t{new T{t}};
    Item *item(new Item(*_t));
    if (phead == nullptr) {
        phead = item;
        ptail = item;
    } else if (phead == ptail) {
        phead->pnext = item;
        ptail = item;
    } else {
        ptail->pnext = item;
        ptail = item;
    }
    return this;
}

template<class T>
T APQueue<T>::dequeue() {
    size--;
    Item *item1 = phead;
    T t = *(item1->pvalue);
    if (phead->pnext != nullptr) {
        phead = phead->pnext;
        delete[] item1;
    }
    return t;
}

template<class T>
void APQueue<T>::show() {
    std::cout << "APQueue of " << size << std::endl;
    Item *head = phead;
    for (size_t i = 0; i < size; ++i) {
        std::cout << "  NO : " << (i + 1) << "\t   " << *head->pvalue << std::endl;
        head = head->pnext;
    }
    head = nullptr;
}

template<class T>
APQueue<T>::~APQueue() {
    std::cout << "destructor" << std::endl;
    while (size > 0) {
        size--;
        Item *item1 = phead;
        if (phead->pnext != nullptr) {
            phead = phead->pnext;
            delete[] item1;
        }
    }
}

template<class T>
APQueue<T> &APQueue<T>::operator=(const APQueue &apQueue) {
    std::cout << "operator ==" << std::endl;
    if (&apQueue == this)
        return *this;
    while (size > 0) {
        size--;
        Item *item1 = phead;
        if (phead->pnext != nullptr) {
            phead = phead->pnext;
            delete[] item1;
        }
    }
    phead = apQueue.phead;
    ptail = apQueue.ptail;
    size = apQueue.size;
    return *this;
}

template<class T>
APQueue<T>::APQueue(const APQueue &apQueue) {
    phead = apQueue.phead;
    ptail = apQueue.ptail;
    size = apQueue.size;
}

template<class T>
T &APQueue<T>::operator[](const size_t &a) const {
    Item *item = phead;
    for (size_t i = 1; i < a; ++i) {
        item = item->pnext;
    }
    return *(item->pvalue);
}








