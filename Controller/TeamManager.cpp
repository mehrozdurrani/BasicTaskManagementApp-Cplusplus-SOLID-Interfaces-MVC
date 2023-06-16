#include "TeamManager.h"

Team *TeamManager::CreateTeam(int teamId, std::string teamName)
{
    Team *team = new Team();

    team->SetTeamId(teamId);
    team->SetTeamName(teamName);
}

Team *TeamManager::FindTeam(int teamId)
{
    // Find Team Id of the ID teamId amd return
    return nullptr;
}

void TeamManager::AddMemberToTeam(User *user, Team *team)
{
    team->GetTeamMembersList().push_back(user);
}

void TeamManager::RemoveMemberFromTeam(User *user, Team *team)
{
    /// Removing team member
}