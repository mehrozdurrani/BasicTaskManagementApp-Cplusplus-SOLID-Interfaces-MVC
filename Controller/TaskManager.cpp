#include "TaskManager.h"

Task *TaskManager::CreateNewTask(int taskId, std::string title, std::string dueDate, std::string priority, std::string status)
{
    Task *task = new Task();
    task->SetTaskId(taskId);
    task->SetTitle(title);
    task->SetDueDate(dueDate);
    task->SetPriority(priority);
    task->SetStatus(status);
    return task;
}
void TaskManager::DeleteTask(User *user, int taskId)
{
    // Find task from user task list with taskId and delete it.
}
void TaskManager::UpdateTask(User *user, int taskId, std::string title, std::string dueDate, std::string priority, std::string status)
{
    // Find task from user task list with taskId and update it.
}
void TaskManager::AssignTaskToUser(Task *task, User *user)
{
    user->GetUserTasks().push_back(task);
}
std::vector<Task *> TaskManager::GetAllUserTasks(User *user) const
{
    user->GetUserTasks();
}
std::vector<Task *> TaskManager::GetAllUserTasksSorted(User *user, std::string sortType) const
{
    // Get all tasks of user, sort it asendine or desending on date and return
}

TaskManager::TaskManager(/* args */)
{
}

TaskManager::~TaskManager()
{
}