#include "ITaskManager.h"

class TaskManager : public ITaskManager
{
public:
    TaskManager();
    ~TaskManager();

    Task *CreateNewTask(int taskId, std::string title, std::string dueDate, std::string priority, std::string status) override;
    void DeleteTask(User *user, int taskId) override;
    void UpdateTask(User *user, int taskId, std::string title, std::string dueDate, std::string priority, std::string status) override;
    void AssignTaskToUser(Task *task, User *user) override;
    std::vector<Task *> GetAllUserTasks(User *user) const override;
    std::vector<Task *> GetAllUserTasksSorted(User *user, std::string sortType) const override;
};
