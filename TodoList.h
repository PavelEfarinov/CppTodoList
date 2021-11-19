//
// Created by paefarinov on 19.11.2021.
//

#ifndef UNTITLED_TODOLIST_H
#define UNTITLED_TODOLIST_H

#include "Task.h"
#include <vector>

class TodoList {
    vector<Task> tasks;

public:
    bool addTask(Task task);

    void completeTask(Task task);

    vector<Task> activeTasks();

    vector<Task> resolvedTasks();

};

#endif //UNTITLED_TODOLIST_H
