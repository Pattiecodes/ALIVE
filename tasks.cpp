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
        string name;
        string description;
        int priority;
        int dueDate;
        int dueMonth;
        int dueYear;
        int status;


        void inclTask(string name, string description, int priority, int dueDate, int dueMonth, int dueYear, int status) {
            name = "Task";
            description = "Description";
            priority = 0;
            dueDate = 0;
            dueMonth = 0;
            dueYear = 0;
            status = 0;
        }
};

int main() {
    cout << "Hello, World!" << endl;
    return 0;
};



