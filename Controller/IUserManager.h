#include <iostream>
#include "User.h";

// User Conract/ Interface
class IUserManager
{
public:
    virtual void CreateNewUser(std::string userName, int userId) = 0;
    virtual bool UpdateUser(int userId, std::string userName) = 0;
    virtual User *FindUserById(int userId) const = 0;
    virtual void DeleteUser() = 0;
};
