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
After that, you'll be prompted with menu of options. You can choose one of the choices (1-4) from the menu
to adjust the to-do-list or exit the program.
```bash
Options:
1. Add task 
2. Mark task as completed
3. Show all tasks 
4. Exit
Enter your choice: 3
```

### Sample workflow
Here's the example of what the program will looks like:
```bash
Options:
1. Add task 
2. Mark task as completed
3. Show all tasks 
4. Exit
Enter your choice: 1

Enter task name: Finish CS8 project
Task added

Options:
1. Add task 
2. Mark task as completed
3. Show all tasks 
4. Exit
Enter your choice: 1

Enter task name: Buy groceries
Task added

Options:
1. Add task 
2. Mark task as completed
3. Show all tasks 
4. Exit
Enter your choice: 3

Current tasks:
[ ] Buy groceries
[ ] Finish CS8 project

Options:
1. Add task 
2. Mark task as completed
3. Show all tasks 
4. Exit
Enter your choice: 2

Enter task name: Buy groceries
Task marked as completed

Options:
1. Add task 
2. Mark task as completed
3. Show all tasks 
4. Exit
Enter your choice: 3

Current tasks:
[X] Buy groceries
[ ] Finish CS8 project

Options:
1. Add task 
2. Mark task as completed
3. Show all tasks 
4. Exit
Enter your choice: 4

Exiting. Thanks for trying out the program!
```
