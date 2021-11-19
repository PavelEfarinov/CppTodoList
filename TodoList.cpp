//
// Created by paefarinov on 19.11.2021.
//

#include "TodoList.h"

using namespace std;

bool TodoList::addTask(Task task) {

    bool shouldAddTask = true;

    for (auto storedTask:tasks) {
        if (storedTask.name == task.name) {
            shouldAddTask = false;
        }
    }

    if (shouldAddTask) {
        tasks.push_back(task);
    }
    return shouldAddTask;
}

void TodoList::completeTask(Task task) {
    for (int i = 0; i < tasks.size(); i++) {
        if (tasks[i].name == task.name) {
            tasks[i].status = RESOLVED;
        }
    }
}

vector<Task> TodoList::activeTasks() {
    vector<Task> activeTasks;
    for (int i = 0; i < tasks.size(); i++) {
        if (tasks[i].status == ACTIVE) {
            activeTasks.push_back(tasks[i]);
        }
    }
    return activeTasks;
}


vector<Task> TodoList::resolvedTasks() {
    vector<Task> activeTasks;
    for (int i = 0; i < tasks.size(); i++) {
        if (tasks[i].status == RESOLVED) {
            activeTasks.push_back(tasks[i]);
        }
    }
    return activeTasks;
}
