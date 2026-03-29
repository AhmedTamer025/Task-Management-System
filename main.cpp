#include <iostream>
#include "TaskManager.h"

using namespace std;

int main() {
    TaskManager manager;
    int choice;

    while (true) {
        cout << "\n--- Task Manager ---\n";
        cout << "1. Add Task\n";
        cout << "2. Show Tasks\n";
        cout << "3. Delete Task\n";
        cout << "4. Exit\n";
        cout << "Choose: ";
        cin >> choice;

        if (choice == 1) {
            int id;
            string title;

            cout << "Enter ID: ";
            cin >> id;

            cout << "Enter Title: ";
            cin.ignore();
            getline(cin, title);

            manager.addTask(id, title);
        }
        else if (choice == 2) {
            manager.showTasks();
        }
        else if (choice == 3) {
            int id;
            cout << "Enter ID to delete: ";
            cin >> id;
            manager.deleteTask(id);
        }
        else if (choice == 4) {
            cout << "Goodbye!\n";
            break;
        }
        else {
            cout << "Invalid choice.\n";
        }
    }

    return 0;
}
