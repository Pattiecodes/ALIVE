DEVLOGS:

# Jan 26, 2025
![Sample Output](image.png)
## Updates 
- task.h with the following changes:
    - Added task status method in task class that will ask the user for current task status.
    - Created taskList() class that will be used to store all the tasks and show it to user via a list. Uses a vector.
    - taskList() also has an add_task method that pushes back the task to the list (vector).
    - taskList() has a list_tasks() method that will print all tasks.
- tasks.cpp:
    - Added taskList constructor and a separate output method for the taskList() class from task.h file

## Problems encountered:
- Only one task can be created, and does not output more or ask the user for more tasks. (tasks.cpp)
- task_status cannot be updated on an existing task. (task.h)

## Bugs:
- Outputs the task status on a single task, which shouldn't happen. (task.h || task.cpp)

## Suggestions:
- The task_status should also update the memory. If a task is done. It should be stored somewhere else, but not in the same taskList.
- Maybe dissect the taskList method to two parts. The existing_taskList and the done_taskList, so as to separate the two types of tasks. Implementing a bool function may work for this.

## Room for improvement:
- Overloading (function, operator)
- Logical Operators


# Jan 27, 2025
## Updates 
- task.h with the following changes:
    - Created a get_task_status method in task class, so task_status won't overload.
- tasks.cpp:
    - Added void getMenu() for a more streamlined and non-confusing navigation.
    - getMenu() includes an Add Task method, a View Tasks method, and an Edit Task method.
    - Resolved the bug: Outputs the task status on a single task, which shouldn't happen. (task.h || task.cpp).

## Problems encountered:
- Check with Jan 26, 2025 Problems encountered.
- getMenu() still lacks Options 2 and 3 and a loop for menu.
- add_task() method should be able to have an option of adding more tasks to it, than exiting immediately. (tasks.cpp && task.h)

## Bugs:
- No bugs encountered today.

## Suggestions:
- The task_status should also update the memory. If a task is done. It should be stored somewhere else, but not in the same taskList.
- Maybe dissect the taskList method to two parts. The existing_taskList and the done_taskList, so as to separate the two types of tasks. Implementing a bool function may work for this.
- Implement a loop for the getMenu(), as well as for the add_task() method.

## Room for improvement:
- See Jan. 26, 2025 Room for improvement. As of Jan. 27, 2025.


# Jan 28, 2025
## Updates 
- task.h with the following changes:
    - Added a check_status() class, inheriting from class Task().
- tasks.cpp:
    - Added the check_status() in Option 2 in getMenu().

## Problems encountered:
- N/A

## Bugs:
- Check status won't show up, in the "View tasks" option - Bug found due to 'too many function calls'. (tasks.cpp)
- check_status() has incomplete constructor. (task.h)


## Suggestions:
- Same as Jan 26-27, 2025 suggestions. But also:
    - Maybe do not loop to continually add tasks as we don't want it to loop to add tasks forever. Let it be as is. As we'll add a database here too.
    - Clean up code for task.h file, as it is becoming messy and unreadable.

## Room for improvement:
- Overloading (function, operator)
- Logical Operators
- Brush up on fundamentals
- How to create an app with c++?

# Jan 28, 2025
## Updates 
- Added ReactJS Framework.

## Problems encountered:
- N/A

## Bugs:
- N/A

## Suggestions:
- The ReactJS framework may be removed if a better way to create the app (Web app) is found.
- See Jan 28, 2025 update.

## Room for improvement:
- Overloading (function, operator)
- Logical Operators
- Brush up on fundamentals.
- ReactJS or C# for UI, and everything else.


# Jan 30, 2025
## Updates 
- task.h with the following changes:
    - 
- tasks.cpp:
    - 

## Problems encountered:
- 

## Bugs:
- 

## Suggestions:
- 

## Room for improvement:
- Overloading (function, operator)
- Logical Operators
- Brush up on fundamentals.

# Apr 10 && 11, 2025
## Updates 
- task.h with the following changes:
    - 
- tasks.cpp:
    - 
- General:
    - Removed node files. They were unnecessary.
    - Edited gitignore files.

## Problems encountered:
- 

## Bugs:
- 

## Suggestions:
- 

## Room for improvement:
- Overloading (function, operator)
- Logical Operators
- Brush up on fundamentals.


------------ Default ------------
# Jan 30, 2025
## Updates 
- task.h with the following changes:
    - 
- tasks.cpp:
    - 

## Problems encountered:
- 

## Bugs:
- 

## Suggestions:
- 

## Room for improvement:
- Overloading (function, operator)
- Logical Operators
- Brush up on fundamentals.

