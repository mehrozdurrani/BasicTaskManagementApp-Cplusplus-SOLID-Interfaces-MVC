#include <iostream>
#include "User.h"

// Task Manager Contract / Interface
class ITaskManager
{
public:
    virtual Task *CreateNewTask(int taskId, std::string title, std::string dueDate, std::string priority, std::string status) = 0;
    virtual void DeleteTask(User *user, int taskId) = 0;
    virtual void UpdateTask(User *user, int taskId, std::string title, std::string dueDate, std::string priority, std::string status) = 0;
    virtual void AssignTaskToUser(Task *task, User *user) = 0;
    virtual std::vector<Task *> GetAllUserTasks(User *user) const = 0;
    virtual std::vector<Task *> GetAllUserTasksSorted(User *user, std::string sortType) const = 0;
};