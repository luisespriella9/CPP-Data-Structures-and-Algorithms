template <class T>
class QueueNode{
    public:
        T value;
        QueueNode<T>* next;
        // Queue node constructor
        QueueNode(T value);
};

template <class T>
class Queue{
    private:
        QueueNode<T>* first;
        QueueNode<T>* last;
    public:
        // Queue constructor
        Queue();
        // Queue destructor
        ~Queue();
        /**
         * Add item to end of queue
         * @param[value] value to add
         */
        void add(T value);
        /**
         * Remove first item added to queue
         */
        T remove();
        /**
         * Get first item from queue
         * @return removed item
         */
        T peek(); 
        /**
         * Check if queue is empty
         * @return first item in queue
         */
        bool isEmpty();
};