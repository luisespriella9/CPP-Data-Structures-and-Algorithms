template <class T>
class StackNode {
public:
	T value;
	StackNode* next;
public:
	// stack node constructor
	StackNode(T value);
};

template <class T>
class Stack {
private:
	StackNode<T>* top;
public:
	// stack constructor
	Stack();
	// stack destructor
	~Stack();
	/**
	 * Remove top item from stack
	 * @return removed item
	 */
	T pop();
	/**
	 * Add item to top of stack
	 * @param[value] value to add to stack
	 */
	void push(T value);
	/**
	 * Get item at the top of the stack
	 * @return item value at the top of the stack
	 */
	T peek();
	/**
	 * Check if stack is empty
	 */
	bool isEmpty();
};