#include <iostream>
#include "Queue.h"

// Queue node constructor
QueueNode::QueueNode(int value)
{
    this->value = value;
    this->next = nullptr;
}

// Queue constructor
Queue::Queue()
{
    this->first = nullptr;
    this->last = nullptr;
}

// Queue destructor
Queue::~Queue()
{
    while (!this->isEmpty()){
        this->remove();
    }
}

/**
 * Add item to end of queue
 * @param[value] value to add
 */
void Queue::add(int value)
{
    QueueNode* node = new QueueNode(value);
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
 */
int Queue::remove()
{
    if (!this->first){
        return NULL;
    }
    QueueNode* node = this->first;
    this->first = this->first->next;
    int value = node->value;
    delete node;
    return value;
}
/**
 * Get first item from queue
 */
int Queue::peek()
{
    if (isEmpty()){
        return NULL;
    }
    return this->first->value;
}

/**
 * Check if queue is empty
 */
bool Queue::isEmpty()
{
    if (!this->first){
        return true;
    }
    return false;
}