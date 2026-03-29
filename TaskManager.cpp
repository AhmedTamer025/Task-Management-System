#include "TaskManager.h"
#include <iostream>

using namespace std;

TaskManager::TaskManager() {
    head = nullptr;
}

void TaskManager::addTask(int id, string title) {
    Task* newTask = new Task(id, title);

    if (head == nullptr) {
        head = newTask;
    } else {
        Task* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newTask;
    }

    cout << "Task added.\n";
}

void TaskManager::showTasks() {
    if (head == nullptr) {
        cout << "No tasks available.\n";
        return;
    }

    Task* temp = head;
    while (temp != nullptr) {
        cout << "ID: " << temp->id << " | Title: " << temp->title << endl;
        temp = temp->next;
    }
}

void TaskManager::deleteTask(int id) {
    if (head == nullptr) {
        cout << "No tasks to delete.\n";
        return;
    }

    if (head->id == id) {
        Task* temp = head;
        head = head->next;
        delete temp;
        cout << "Task deleted.\n";
        return;
    }

    Task* current = head;
    Task* prev = nullptr;

    while (current != nullptr && current->id != id) {
        prev = current;
        current = current->next;
    }

    if (current == nullptr) {
        cout << "Task not found.\n";
    } else {
        prev->next = current->next;
        delete current;
        cout << "Task deleted.\n";
    }
}
