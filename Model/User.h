// User Header class
#include <iostream>

class User
{
private:
    /* data */
    std::string userName;
    int userId;

public:
    User(/* args */);
    ~User();
    void SetUserName(std::string userName);
    void SetUserId(int userId);
    std::string GetUserName();
    int GetUserId();
};