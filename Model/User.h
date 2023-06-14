// User Header class
#include <iostream>
#include "Task.h"

class User
{
private:
    std::string userName;
    int userId;
    std::vector<Task *> userTasks;

public:
    User();
    ~User();
    void SetUserName(std::string userName);
    void SetUserId(int userId);
    std::string GetUserName();
    int GetUserId();
    void AddUserTask(Task *task);
    std::vector<Task *> GetUserTasks();
};