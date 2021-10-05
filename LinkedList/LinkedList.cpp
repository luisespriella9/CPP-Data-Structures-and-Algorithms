#include <iostream>
#include "LinkedList.h"

// Linked list node constructor
template <class T>
ListNode<T>::ListNode(T data)
{
    this->data = data;
    this->next = nullptr;
}

// linked list constructor
template <class T>
LinkedList<T>::LinkedList(){}

// linked list destructor
template <class T>
LinkedList<T>::~LinkedList()
{
    if (!this->head){
        return;
    }
    ListNode<T>* currentPointer = this->head;
    while (currentPointer){
        ListNode<T>* nextPointer = currentPointer->next;
        delete currentPointer;
        currentPointer = nextPointer;
    }
}

/**
 * Add item to end of linked list
 * @param[data] value to add
 */
template <class T>
void LinkedList<T>::appendToTail(T data)
{
    ListNode<T>* newNode = new ListNode<T>(data);
    if (!this->head){
        this->head = newNode;
    }
    else{
        ListNode<T>* currentPointer = this->head;
        while (currentPointer->next)
        {
            currentPointer = currentPointer->next;
        }
        currentPointer->next = newNode;
    }
}

/**
 * Delete value from linked list
 * @param[data] value to delete
 * @return true if deleted successfully
 */
template <class T>
bool LinkedList<T>::deleteNode(T data)
{
    if (!this->head){
        return false;
    }
    if (this->head->data==data){
        ListNode<T>* deletePointer = this->head;
        this->head = this->head->next;
        delete deletePointer;
        return true;
    }
    ListNode<T>* currentPointer = this->head;
    while (currentPointer->next){
        if (currentPointer->next->data==data){
            ListNode<T>* deletePointer = currentPointer->next;
            currentPointer->next = currentPointer->next->next;
            delete deletePointer;
            return true;
        }
        currentPointer = currentPointer->next;
    }
    return false;
}

/**
 * Print Linked List
 */
template <class T>
void LinkedList<T>::printList()
{
    ListNode<T>* currentPointer = this->head;
    while (currentPointer){
        std::cout << currentPointer->data << "->";
        currentPointer = currentPointer->next;
    }
    std::cout << "\n";

}