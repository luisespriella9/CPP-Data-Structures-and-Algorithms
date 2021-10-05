#include "LinkedList.cpp"

int main(){
    LinkedList<char>* list = new LinkedList<char>();
    std::cout << "Initialize Linked List \n";
    std::cout << "Append A \n";
    list->appendToTail('A');
    std::cout << "Append B \n";
    list->appendToTail('B');
    list->printList();
    std::cout << "Delete A \n";
    list->deleteNode('A');
    list->printList();
    std::cout << "Append C \n";
    list->appendToTail('C');
    std::cout << "Append E \n";
    list->appendToTail('E');
    list->printList();
    std::cout << "Delete C \n";
    list->deleteNode('C');
    list->printList();
    std::cout << "Append F \n";
    list->appendToTail('F');
    list->printList();
    std::cout << "Delete B \n";
    list->deleteNode('B');
    list->printList();
    std::cout << "Delete Z \n";
    list->deleteNode('Z');
    list->printList();
    std::cout << "Delete E \n";
    list->deleteNode('E');
    list->printList();
    std::cout << "Delete F \n";
    list->deleteNode('F');
    list->printList();
    return 0;
}