#include <iostream>

class ITaskManager
{
    virtual void CreateNewTask(std::string title, std::string dueDate, std::string priority, std::string status) = 0;
    virtual void DeleteTask(int taskId) = ;
};