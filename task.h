
#ifndef TASK_H
#define TASK_H
    #include <iostream>
    #include <string>
    #include <iomanip>
    #include <ctime>
    #include <vector>
    #include <chrono>
    #include <sstream>
    #include <vector>

    using std::string;
    using std::cout;
    using std::endl;

    // defining what a task is:
   
    class task {
        public:
        string task_name;
        std::chrono::system_clock::time_point start_date;
        std::chrono::system_clock::time_point due_date;
        //the task class should define what a task is:
        // 1. a task should be able to be assigned a priority
        // 2. a task should be able to be assigned a deadline
        // 3. a task should be able to be assigned a status
        // 4. a task should be able to be asssigned a category
        // 5. a task should be able to be assigned a description
        // 6. a task should be able to be assigned a date
        // 7. a task should be able to have a 'gantt chart' like representation
            // 7.a a task should be able to be assigned a time
        
        //task() constructor
        task() : task_name(""), start_date(), due_date() {}

        //set_start_date method, with date string - a passed by reference value 
        void set_start_date(const string& date_str) {
            start_date = parse_date(date_str);
        }

        void input_start_date() {
            string date_str;
            cout << "Enter start date (YYYY-MM-DD HH:MM:SS): ";
            std::getline(std::cin, date_str);
            return set_start_date(date_str);
        }

        void set_due_date(const string& date_str) {
            due_date = parse_date(date_str);
        }

        void input_due_date() {
            string date_str;
            cout << "Enter due date (YYYY-MM-DD HH:MM:SS): ";
            std::getline(std::cin, date_str);
            return set_due_date(date_str);
            
        }

        int task_status() {
            int status;
            status = get_task_status();
            return status;
        }
        int get_task_status() {
            // change enum to maps (dsa)
            enum task_status {not_started, in_progress, done};
           cout << "Enter task status (0 for not started, 1 for in progress, 2 for done): ";
           int task_status_progress;
           std::cin >> task_status_progress;
           if (task_status_progress == 0) {
             cout << "Task status: Not Started" << std::endl;}
            else if(task_status_progress == 1) {
                cout << "Task status: In Progress" << std::endl;
            }
            else {
                cout << "Task status: Done" << std::endl;
            }

            return task_status_progress;
        }


        private:
            /**
             * @brief Parses a date string and converts it to a std::chrono::system_clock::time_point.
             *
             * This function takes a date string in the format "%Y-%m-%d %H:%M:%S" and converts it
             * to a std::chrono::system_clock::time_point. If the date string cannot be parsed,
             * it throws a std::runtime_error.
             *
             * @param date_str The date string to be parsed.
             * @return A std::chrono::system_clock::time_point representing the parsed date and time.
             * @throws std::runtime_error If the date string cannot be parsed.
             */
            std::chrono::system_clock::time_point parse_date(const string& date_str) {
            std::tm tm = {};
            std::istringstream ss(date_str);
            ss >> std::get_time(&tm, "%Y-%m-%d %H:%M:%S");
            if (ss.fail()) {
                throw std::runtime_error("Failed to parse date");
            }
            std::time_t time = std::mktime(&tm);
            return std::chrono::system_clock::from_time_t(time);
        }

        
    };


//taskList class for task class.
class taskList {
    public:

    taskList() {}
    
    void add_task(const task& t) {
        /**
     *
     * This function iterates over the collection of tasks and prints the name of each task.
     * 
     * The for-loop uses a range-based for loop to iterate over each task in the `tasks` collection.
     * - `const` ensures that the tasks are not modified during iteration.
     * - `auto&` automatically deduces the type of each task and uses a reference to avoid copying.
     * - `t` is the loop variable representing each task in the collection.
     * - `: tasks` specifies that the loop should iterate over the `tasks` collection.
     * This method iterates through the list of tasks and prints the name of each task to the standard output.
     * 
     * The for-loop iterates over each task in the 'tasks' container.
     * For each task, it prints the task name using 'cout'.
     */
        tasks.push_back(t);
        int tasksNumber[] = {};
        for (const auto& t : tasks) {
            cout << "Task Name: " << t.task_name << "\n";
        }
    }
    void list_tasks() const {
        for (const auto& t : tasks) {
            // Print the name of each task
            cout << "Task Name: " << t.task_name << "\n";

        }  
    }
    private:
    std::vector<task> tasks;

};

// check_status class from task class to update and simplify updating the status of a task.
// this should be updated toon when we view the "view tasks" or "edit tasks" option.
class check_status : public task {
    public:
    void setUpdate_task_status(int status) {
        if (task_status() == 2) {
            cout << task_status() << endl;
        } else {
            while (task_status() != 2 || task_status() < 0 || task_status() < 1 || task_status() > 2) {
                cout << "Enter task status (0 for not started, 1 for in progress, 2 for done):" << endl;
                get_task_status();
                break;
            }
            cout << "Invalid value" << endl;
        }
    }

    check_status() {}
    private:
    int get_task_status();
    int task_status();
    int set_due_date();
    int set_start_date();
};
#endif // TASK_H

// Work omitting the taskList class to add a task to the list and view the tasks.