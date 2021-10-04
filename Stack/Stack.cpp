#include <iostream>
#include "Stack.h"

// stack node constructor
template <class T>
StackNode<T>::StackNode(T value) {
	this->value = value;
	this->next = nullptr;
}


// stack constructor
template <class T>
Stack<T>::Stack() { top = nullptr; }

// stack destructor
template <class T>
Stack<T>::~Stack() {
	StackNode<T>* nodePointer = top;
	while (nodePointer != nullptr) {
		StackNode<T>* deletePointer = nodePointer;
		StackNode<T>* nextPointer = nodePointer->next;
		delete deletePointer;
		nodePointer = nextPointer;
	}
}

/**
* Remove top item from stack
* @return removed item
*/
template <class T>
T Stack<T>::pop() {
	StackNode<T>* node = top;
	if (isEmpty()) {
		return NULL;
	}
	else {
		StackNode<T>* node = top;
		top = node->next;
		return node->value;
	}
}

/**
* Add item to top of stack
* @param[value] value to add to stack
*/
template <class T>
void Stack<T>::push(T value) {
	StackNode<T>* newTop = new StackNode<T>(value);
	if (!isEmpty()) {
		newTop->next = top;
	}
	top = newTop;
}

/**
* Get item at the top of the stack
* @return item value at the top of the stack
*/
template <class T>
T Stack<T>::peek() {
	if (isEmpty()) {
		return NULL;
	}
	return top->value;
}

/**
* Check if stack is empty
*/
template <class T>
bool Stack<T>::isEmpty() {
	if (!top) {
		return true;
	}
	return false;
}