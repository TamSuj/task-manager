# To-Do List Manager

A simple console-based C++ program that allows users to manage their to-do list by adding tasks, marking tasks as completed, and viewing their current to-do list. The program uses multiple classes, operator overload, and LinkedList.

## Features

- Add tasks to your to-do list.
- Mark tasks as completed.
- View your entire to-do list along with completion statuses.

## Note
- Since the program is relatively simple, I didn't implement file seperation approach in some of the classes.

## How to use the program
Good question!

You can simply complie the program by running the following command in the terminal 
```bash
g++ -o task-manager  main.cpp Task.cpp List.cpp
```
Then type the following command to run the program
```bash
./task-manager
```
After that, you'll be prompted with menu of options you can choose from
```bash
Options:
1. Add task 
2. Mark task as completed
3. Show all tasks 
4. Exit
Enter your choice: 3
```
