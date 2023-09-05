#include "IUserManager.h"

class UserManager : public IUserManager
{
public:
    UserManager();
    ~UserManager();
    User *CreateNewUser(int userId, std::string userName) override;
    bool UpdateUser(int userId, std::string userName) override;
    User *FindUserById(int userId) const override;
    void DeleteUser(int userId) override;
    std::vector<User *> GetAllUsers() override;

private:
    std::vector<User *> users;
};