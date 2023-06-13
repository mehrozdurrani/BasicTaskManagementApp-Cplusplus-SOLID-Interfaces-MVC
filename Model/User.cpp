// User Class
#include <iostream>
#include "User.h"

User::User()
{
}

User::~User()
{
}

// Setting User Property
void User::SetUserName(std::string userName)
{
    this->userName = userName;
}
void User::SetUserId(int userId)
{
    this->userId = userId;
}

// Getting User Property
std::string User::GetUserName()
{
    return this->userName;
}

int User::GetUserId()
{
    return this->userId;
}

void User::AddUserTask(Task *task)
{
    this->userTasks.push_back(task);
}

std::vector<Task *> User::GetUserTasks()
{
    return this->userTasks;
}