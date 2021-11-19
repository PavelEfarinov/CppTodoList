//
// Created by paefarinov on 19.11.2021.
//

#ifndef UNTITLED_TASK_H
#define UNTITLED_TASK_H

#include<string>
#include "TaskStatus.h"

using namespace std;

class Task {
public:
    string name;
    string description;
    int dueTo;
    TaskStatus status = ACTIVE;

    string display();
};

#endif //UNTITLED_TASK_H
