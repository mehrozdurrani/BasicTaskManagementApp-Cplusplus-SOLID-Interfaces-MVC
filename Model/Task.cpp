// Task Class
#include <iostream>
#include "Task.h"

// Setting properties

Task::Task()
{
}
Task::~Task()
{
}

void Task::SetTaskId(int taskId)
{
    this->taskId = taskId;
}
void Task::SetTitle(std::string title)
{
    this->title = title;
}
void Task::SetDueDate(std::string date)
{
    this->dueDate = dueDate;
}
void Task::SetPriority(std::string priority)
{
    this->priority = priority;
}
void Task::SetStatus(std::string status)
{
    this->status = status;
}

// Getting Properties
int Task::GetTaskId()
{
    return this->taskId;
}
std::string Task::GetTitle()
{
    return this->title;
}
std::string Task::GetDueDate()
{
    return this->dueDate;
}
std::string Task::GetPriority()
{
    return this->priority;
}
std::string Task::GetStatus()
{
    return this->status;
}
