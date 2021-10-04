#include <iostream>
#include "Queue.h"

// Queue node constructor
template <class T>
QueueNode<T>::QueueNode(T value)
{
    this->value = value;
    this->next = nullptr;
}

// Queue constructor
template <class T>
Queue<T>::Queue()
{
    this->first = nullptr;
    this->last = nullptr;
}

// Queue destructor
template <class T>
Queue<T>::~Queue()
{
    while (!this->isEmpty()){
        this->remove();
    }
}

/**
 * Add item to end of queue
 * @param[value] value to add
 */
template <class T>
void Queue<T>::add(T value)
{
    QueueNode<T>* node = new QueueNode<T>(value);
    if (!this->first && !this->last){
        this->first = node;
        this->last = node;
    }
    else if (this->first==this->last){
        this->last = node; 
        this->first->next = this->last;       
    }
    else {
        this->last->next = node;
        this->last = node;
    }
}
/**
 * Remove first item added to queue
 * @return removed item
 */
template <class T>
T Queue<T>::remove()
{
    if (!this->first){
        return NULL;
    }
    QueueNode<T>* node = this->first;
    this->first = this->first->next;
    int value = node->value;
    delete node;
    return value;
}
/**
 * Get first item from queue
 * @return first item in queue
 */
template <class T>
T Queue<T>::peek()
{
    if (isEmpty()){
        return NULL;
    }
    return this->first->value;
}

/**
 * Check if queue is empty
 */
template <class T>
bool Queue<T>::isEmpty()
{
    if (!this->first){
        return true;
    }
    return false;
}