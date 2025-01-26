#include <iostream>
#include <iomanip>
#include "task.h"


using std::cout;
using std::setw;
using std::endl;
using std::string;
using std::cin;


int main() {
    task task;
    taskList my_task_list;

    cout << "Enter task name: ";
    getline(cin, task.task_name);
    // Call input methods to set dates
    task.input_start_date();
    task.input_due_date();
    task.task_status();

    // Add the task to the task list
    my_task_list.add_task(task);

    // Convert time points to time_t for printing
    std::time_t start_time = std::chrono::system_clock::to_time_t(task.start_date);
    std::time_t due_time = std::chrono::system_clock::to_time_t(task.due_date);

    cout << "The task is: " << task.task_name << endl;
    cout << "Starting on: " << std::ctime(&start_time);
    cout << "Due on: " << std::ctime(&due_time);
    cout << task.task_status() << endl;

    // Output the list of tasks
    cout << "\nListing all tasks:\n";
    my_task_list.list_tasks();

    return 0;
};



