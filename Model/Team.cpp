// Team Class
#include "Team.h"

Team::Team() {}
Team::~Team() {}

void Team::SetTeamId(int teamId)
{
    this->teamId = id
}
int Team::GetTeamId()
{
    return this->teamId;
}
void Team::SetTeamName(std::string name)
{
    this->teamName = name;
}
std::string Team::GetTeamName()
{
    return this->teamName;
}
std::vector<User *> Team::GetTeamMembersList()
{
    return this->users;
}
