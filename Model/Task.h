// Task Header Class
#include <iostream>

class Task
{
private:
    std::string title;
    std::string dueDate;
    std::string priority;
    std::string status;

public:
    Task();
    ~Task();

    void SetTitle(std::string title);
    void SetDueDate(std::string date);
    void SetPriority(std::string priority);
    void SetStatus(std::string status);

    std::string GetTitle();
    std::string GetDueDate();
    std::string GetPriority();
    std::string GetStatus();
};
