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
    // Find user from users list and change name of the user
    std::cout << "Update user of ID: " << userId << "\n";
}
User *UserManager::FindUserById(int userId) const
{
    // Find User
    std::cout << "Find User of ID: " << userId << "\n";
}
void UserManager::DeleteUser(int userId)
{

    // Delete User
    std::cout << "Delete user of ID: " << userId << "\n";
}

std::vector<User *> UserManager::GetAllUsers()
{
    return users;
}
