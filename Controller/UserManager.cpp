#include "UserManager.h"

UserManager::UserManager() {}
UserManager::~UserManager() {}

void UserManager::CreateNewUser(std::string userName, int userId)
{
    User *user = new User();
    user->SetUserId(userId);
    user->SetUserName(userName);

    users.push_back(user);
}
bool UserManager::UpdateUser(int userId, std::string userName)
{
}
User *UserManager::FindUserById(int userId) const {}
void UserManager::DeleteUser() {}
