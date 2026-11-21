#include <iostream>
#include <limits>
#include <string>
#include <vector>

struct Task {
    int id;
    std::string title;
    bool completed;
};

void addTask(std::vector<Task>& tasks, int& nextId) {
    std::cout << "Enter task title: ";
    std::string title;
    std::getline(std::cin, title);

    if (title.empty()) {
        std::cout << "Task title cannot be empty.\n";
        return;
    }

    tasks.push_back({nextId++, title, false});
    std::cout << "Task added.\n";
}

void listTasks(const std::vector<Task>& tasks) {
    if (tasks.empty()) {
        std::cout << "No tasks yet.\n";
        return;
    }

    for (const Task& task : tasks) {
        const std::string status = task.completed ? " [completed]" : " [pending]";
        std::cout << task.id << ". " << task.title << status << '\n';
    }
}

int main() {
    std::vector<Task> tasks;
    int nextId = 1;
    int choice = 0;

    while (true) {
        std::cout << "\n=== C++ Task Tracker ===\n"
                  << "1. Add task\n"
                  << "2. List tasks\n"
                  << "3. Mark task as completed\n"
                  << "4. Exit\n"
                  << "Choose an option: ";

        if (!(std::cin >> choice)) {
            std::cout << "Invalid input. Please enter a number.\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        switch (choice) {
            case 1:
                addTask(tasks, nextId);
                break;
            case 2:
                listTasks(tasks);
                break;
            case 3:
                std::cout << "This feature is not implemented yet. See the open GitHub issue.\n";
                break;
            case 4:
                std::cout << "Goodbye!\n";
                return 0;
            default:
                std::cout << "Please choose an option from 1 to 4.\n";
        }
    }
}
