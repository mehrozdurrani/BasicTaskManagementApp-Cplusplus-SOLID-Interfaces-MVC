#include <iostream>
#include <vector>
#include "IUserManager.h"

class UserManager : public IUserManager
{
public:
    UserManager();
    ~UserManager();

    void CreateNewUser(std::string userName, int userId) override;
    bool UpdateUser(int userId, std::string userName) override;
    User *FindUserById(int userId) const override;
    void DeleteUser(int userId) override;

private:
    std::vector<User *> users;
};