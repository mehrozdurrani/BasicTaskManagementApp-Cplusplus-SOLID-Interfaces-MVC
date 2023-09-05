#include "TeamManager.h"

Team *TeamManager::CreateNewTeam(int teamId, std::string teamName)
{
    Team *team = new Team();
    team->SetTeamId(teamId);
    team->SetTeamName(teamName);
    this->teams.push_back(team);
    return team;
}

Team *TeamManager::FindTeam(int teamId)
{
    // Find Team Id of the ID teamId amd return
    return nullptr;
}

void TeamManager::RemoveTeam(int teamId)
{
    // team will be removed from the list teams here
}
std::vector<Team *> TeamManager::GetAllTeams()
{
    return this->teams;
}

void TeamManager::AddMemberToTeam(User *user, Team *team)
{
    team->GetTeamMembersList().push_back(user);
}

void TeamManager::RemoveMemberFromTeam(User *user, Team *team)
{
    /// Removing team member
}
