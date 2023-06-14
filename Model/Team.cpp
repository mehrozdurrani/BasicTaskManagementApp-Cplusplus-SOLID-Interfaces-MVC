// Team Class
#include "Team.h"

Team::Team() {}
Team::~Team() {}

void Team::SetTeamName(std::string name)
{
    this->teamName = name;
}
void Team::AddTeamMember(User *user)
{
    this->users.push_back(user);
}
void Team::RemoveTeamMember(User *user)
{
    // For Removing the User from the team
}
std::vector<User *> Team::GetTeamMembersList()
{
    return this->users;
}
std::string Team::GetTeamName()
{
    return this->teamName;
}