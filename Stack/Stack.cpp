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
Stack<T>::Stack() { this->top = nullptr; }

// stack destructor
template <class T>
Stack<T>::~Stack() {
	while (!this->isEmpty()){
		this->pop();
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
		this->top = node->next;
		int value = node->value;
		delete node;
		return value;
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
	this->top = newTop;
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
	return this->top->value;
}

/**
* Check if stack is empty
*/
template <class T>
bool Stack<T>::isEmpty() {
	if (!this->top) {
		return true;
	}
	return false;
}