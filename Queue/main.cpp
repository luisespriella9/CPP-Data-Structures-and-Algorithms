#include "Queue.cpp"

int main(){
    Queue<int>* queue = new Queue<int>();
    std::cout << "Initialized Queue \n";
	std::cout << "Queue is empty: " << queue->isEmpty() << "\n";
	std::cout << "add 5 \n";
    queue->add(5);
    std::cout << "Queue is empty: " << queue->isEmpty() << "\n";
    std::cout << "peek: " << queue->peek() << "\n";
    std::cout << "add 8 \n";
    queue->add(8);
    std::cout << "peek: " << queue->peek() << "\n";
    std::cout << "remove \n";
    queue->remove();
    std::cout << "peek: " << queue->peek() << "\n";
    std::cout << "add 3 \n";
    queue->add(3);
    std::cout << "add 2 \n";
    queue->add(2);
    std::cout << "add 7 \n";
    queue->add(7);
    std::cout << "peek: " << queue->peek() << "\n";
    std::cout << "remove \n";
    queue->remove();
    std::cout << "remove \n";
    queue->remove();
    std::cout << "peek: " << queue->peek() << "\n";
    return 0;
}