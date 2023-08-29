#ifndef TASK_CPP
#define TASK_CPP
#include <iostream>

class Task {

private:
    std::string taskName; // Used to store task name
    bool complete;

public:
    // Contructor
    Task(const std::string& name): taskName(name), complete(false) {
    }

    Task(): taskName(""), complete(false) {}

    // Mark task as completed
    void markCompleted(){
        complete = true;
    }

    // Check if task is completed
    bool checkIfCompleted(){
        return complete;
    }

    // Return the name of the task when being called
    std::string getName(){
        return taskName;
    }
};

bool inline operator==(Task &lhs, Task &rhs) {
    return lhs.getName() == rhs.getName();
}

#endif