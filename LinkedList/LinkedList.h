template <class T>
class ListNode {
    public:
        T data;
        ListNode<T>* next;
        // Linked list node constructor
        ListNode<T>(T data);
};

template <class T>
class LinkedList {
    private:
        ListNode<T>* head;
    public:
        // linked list constructor
        LinkedList<T>();
        // linked list destructor
        ~LinkedList<T>();
        /**
         * Add item to end of linked list
         * @param[data] value to add
         */
        void appendToTail(T data);
        /**
         * Delete value from linked list
         * @param[data] value to delete
         * @return true if deleted successfully
         */
        bool deleteNode(T data);
        /**
         * Print Linked List
         */
        void printList();
};
