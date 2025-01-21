#include <iostream>
#include <iomanip>
#include <hstring.h>

using std::cout;
using std::setw;
using std::endl;
using std::string;


// defining what a task is:
class task {
    public:
    string task_name; //not of any use. Declared for the sake of no errors
    //the task class should define what a task is:
    // 1. a task should be able to be assigned a priority
    // 2. a task should be able to be assigned a deadline
    // 3. a task should be able to be assigned a status
    // 4. a task should be able to be assigned a category
    // 5. a task should be able to be assigned a description
    // 6. a task should be able to be assigned a date
    // 7. a task should be able to have a 'gantt chart' like representation
        // 7.a a task should be able to be assigned a time
};

int main() {
    cout << "Hello, World!" << endl;
    return 0;
};



