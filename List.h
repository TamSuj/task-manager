#ifndef LIST_H
#define LIST_H
#include <iostream>
#include "Task.cpp"

// node for this task
// adapted from CS 3A's node construct
struct Node
{
public:
    Node(const Task& item = Task(), Node* next = nullptr);

    friend std::ostream& operator<<(std::ostream& outs, const Node& printMe);

    Task _item;
    Node* _next;
};

class toDoList{
public:
    toDoList(){}

    // Add task (new node) to the list
    void addTask(Task& task);

    // Mark task as completed
    void markTaskCompleted(Task& task);

    // Show all of the current tasks
    void showTask();

private:
    Node* head = nullptr;
};


#endif