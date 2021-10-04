#include <iostream>
#include "Stack.h"

int main() {
	Stack<int>* stack = new Stack<int>();
	std::cout << "Initialozed Stack \n";
	std::cout << "stack is empty: " << stack->isEmpty() << "\n";
	std::cout << "push 5 \n";
	stack->push(5);
	std::cout << "stack is empty: " << stack->isEmpty() << "\n";
	std::cout << "peek: " << stack->peek() << "\n";
	std::cout << "pop \n";
	stack->pop();
	std::cout << "stack is empty: " << stack->isEmpty() << "\n";
	std::cout << "peek: " << stack->peek() << "\n";
	std::cout << "push 8 \n";
	stack->push(8);
	std::cout << "push 3 \n";
	stack->push(3);
	std::cout << "push 2 \n";
	stack->push(2);
	std::cout << "peek: " << stack->peek() << "\n";
	std::cout << "pop \n";
	stack->pop();
	std::cout << "peek: " << stack->peek() << "\n";
	std::cout << "pop \n";
	stack->pop();
	std::cout << "peek: " << stack->peek() << "\n";
	std::cout << "stack is empty: " << stack->isEmpty() << "\n";
	return 0;
}