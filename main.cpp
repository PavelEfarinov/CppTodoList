#include <iostream>
#include "TodoList.h"

int main() {
    TodoList list;
    Task testTask;

    testTask.name = "TEST NAME";
    testTask.description = "TEST DESCRIPTION";
    testTask.dueTo = 0;

    list.addTask(testTask);
    list.completeTask(testTask);
//    if(!list.addTask(testTask))
//    {
//        cout << "WAS UNABLE TO ADD NEW TASK: " + testTask.display();
//    }

    auto resultList = list.resolvedTasks();

    for (auto resultTask: resultList) {
        cout << resultTask.display();
    }
    return 0;
}
