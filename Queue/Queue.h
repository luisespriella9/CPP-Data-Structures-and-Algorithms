class QueueNode{
    public:
        int value;
        QueueNode* next;
        // Queue node constructor
        QueueNode(int value);
};

class Queue{
    private:
        QueueNode* first;
        QueueNode* last;
    public:
        // Queue constructor
        Queue();
        // Queue destructor
        ~Queue();
        /**
         * Add item to end of queue
         * @param[value] value to add
         */
        void add(int value);
        /**
         * Remove first item added to queue
         */
        int remove();
        /**
         * Get first item from queue
         */
        int peek(); 
        /**
         * Check if queue is empty
         */
        bool isEmpty();
};