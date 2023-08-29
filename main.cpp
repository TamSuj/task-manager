#include <iostream>
#include "Task.cpp"
#include "List.h"

int main() {
    toDoList myList;
    char choice = ' ';

    while (choice != '4') {
        // Show all the options for the user to choose from
        std::cout << "Options:\n";
        std::cout << "1. Add task \n2. Mark task as completed\n";
        std::cout << "3. Show all tasks \n4. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        // Check which action they are trying to do and perform the task by calling functions accordingly
        switch (choice) {
            case '1': {
                std::string taskName;
                std::cout << "Enter task name: ";
                std::cin.ignore(); // Clear the newline character from the previous input
                std::getline(std::cin, taskName);

                Task newTask(taskName);
                myList.addTask(newTask);

                std::cout << "Task added\n";
                break;
            }

            case '2': {
                std::string taskName;
                std::cout << "Enter task name: ";
                std::cin.ignore();
                std::getline(std::cin, taskName);

                Task taskToMark(taskName);
                myList.markTaskCompleted(taskToMark);

                std::cout << "Task marked as completed\n";
                break;
            }

            case '3':
                std::cout << "Current tasks:\n";
                myList.showTask();
                break;

            case '4':
                std::cout << "Exiting. Thanks for trying out the program!\n";
                break;

            default:
                std::cout << "Invalid choice, please re-enter\n";
        }

    };

    return 0;
}

/*
int main() {
    // Create tasks
    Task task1("Finish CS8 project");
    Task task2("Buy groceries");
    Task task3("Finish discussion post");

    // Create a toDoList object
    toDoList myToDoList;

    // Add tasks to the list
    myToDoList.addTask(task1);
    myToDoList.addTask(task2);
    myToDoList.addTask(task3);

    // Mark task1 as completed
    myToDoList.markTaskCompleted(task1);

    // Display the tasks
    // Expecting "Finish CS8 project" to be marked as complete [X]
    std::cout << "Tasks in the list:" << std::endl;
    myToDoList.showTask();

    // Mark task3 as completed
    myToDoList.markTaskCompleted(task3);

    // Display the tasks
    // Expecting "Finish discussion post" to be marked as complete [X]
    std::cout << std::endl << "Tasks in the list:" << std::endl;
    myToDoList.showTask();

    return 0;
}
*/