//
// Created by paefarinov on 19.11.2021.
//
#include "Task.h"

using namespace std;

string Task::display() {
    return "name: " + name +
           "\ndescription: " + description +
           "\ndueTo: " + to_string(dueTo) +
           "\nTaskStatus: "  + (status == 0 ? "ACTIVE" : "RESOLVED")
           + "\n";
}