// Team Class
#include "Team.h"

Team::Team() {}
Team::~Team() {}

void Team::SetTeamId(int teamId)
{
    this->teamId = teamId;
}

int Team::GetTeamId()
{
    return this->teamId;
}

void Team::SetTeamName(std::string teamName)
{
    this->teamName = teamName;
}

std::string Team::GetTeamName()
{
    return this->teamName;
}

std::vector<User *> Team::GetTeamMembersList()
{
    return this->users;
}
