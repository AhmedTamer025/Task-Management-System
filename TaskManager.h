#ifndef TASK_MANAGER_H
#define TASK_MANAGER_H

#include "Task.h"

class TaskManager {
private:
    Task* head;

public:
    TaskManager();

    void addTask(int id, std::string title);
    void showTasks();
    void deleteTask(int id);
};

#endif
