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

    cout << "Enter task name: ";
    getline(cin, task.task_name);
    // Call input methods to set dates
    task.input_start_date();
    task.input_due_date();

    // Convert time points to time_t for printing
    std::time_t start_time = std::chrono::system_clock::to_time_t(task.start_date);
    std::time_t due_time = std::chrono::system_clock::to_time_t(task.due_date);

    cout << "The task is: " << task.task_name << endl;
    cout << "Starting on: " << std::ctime(&start_time);
    cout << "Due on: " << std::ctime(&due_time);
};



