#include <iostream>
#include <vector>
#include "User.h"

// User Conract/ Interface
class IUserManager
{
public:
    virtual User *CreateNewUser(int userId, std::string userName) = 0;
    virtual bool UpdateUser(int userId, std::string userName) = 0;
    virtual User *FindUserById(int userId) const = 0;
    virtual std::vector<User *> GetAllUsers() = 0;
    virtual void DeleteUser(int userId) = 0;
};
