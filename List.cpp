#ifndef LIST_CPP
#define LIST_CPP
#include "List.h"

Node::Node(const Task& item, Node* next) : _item(item), _next(next) 
{}

void toDoList::addTask(Task& task){
    Node* newNode = new Node(task);
    newNode->_next = head;
    head = newNode;
}


void toDoList::markTaskCompleted(Task& task){
    Node* walker = head;

    while(walker != nullptr) {
        // If task name matched, mark task as completed
        if(walker->_item.getName() == task.getName()){
            walker->_item.markCompleted();
            break;
        }

        // Else, increment walker
        walker = walker->_next;
    }
}

void toDoList::showTask(){
    Node* walker = head;
    while(walker != nullptr){
        // Check if task if completed or not (status), then print out the name of the task
        std::cout << (walker->_item.checkIfCompleted() ? "[X]" : "[ ]") << " " << walker->_item.getName() << std::endl;
        walker = walker->_next;
    }
}

// Overload == operator so we can compare the content of each task easily
// Simply check if the name task if the _item of the 2 Nodes are the same
bool inline operator==(const Node &lhs, const Node &rhs){
    return lhs._item == rhs._item;
}

#endif