#ifndef TASK_H
#define TASK_H

#include <string>

class Task {
public:
    int id;
    std::string title;
    Task* next;

    Task(int id, std::string title) {
        this->id = id;
        this->title = title;
        this->next = nullptr;
    }
};

#endif
