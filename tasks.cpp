#include <iostream>
#include <iomanip>
#include "task.h"
#include <vector>


using std::cout;
using std::setw;
using std::endl;
using std::string;
using std::cin;

void getMenu();

int main() {
    getMenu();

    return 0;
};

void getMenu(){
    task task;
    taskList my_task_list;
    check_status();


    char menu;
    cout << "1. Add Task" << endl;
    cout << "2. View Task" << endl;
    cout << "3. Edit Task" << endl; //include Delete task here
    cout << "4. Exit Task" << endl;
    cin >> menu;
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // To ignore the newline character left in the input buffer

    if (menu == '1') { // We need to loop here, as well as show the other options, and not have it exit
        cout << "Enter task name: ";
        getline(cin, task.task_name);
        // Call input methods to set dates
        task.input_start_date();
        task.input_due_date();

        // Add the task to the task list
        //task.push(add_task);

        // Convert time points to time_t for printing
        std::time_t start_time = std::chrono::system_clock::to_time_t(task.start_date);
        std::time_t due_time = std::chrono::system_clock::to_time_t(task.due_date);
        
        cout << task.get_task_status() << endl;
        cout << "The task is: " << task.task_name << endl;
        cout << "Starting on: " << std::ctime(&start_time);
        cout << "Due on: " << std::ctime(&due_time);
        
        my_task_list.list_tasks();
        check_status();
    }
    else if (menu == '2'){
        // Output the list of tasks
        cout << "\nListing all tasks:\n";
        my_task_list.list_tasks();
        check_status();
    } else {
        cout << "Invalid choice. Please try again." << endl;
    }

}


