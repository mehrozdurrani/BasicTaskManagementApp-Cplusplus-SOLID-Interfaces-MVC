
#include "ITeamManager.h"

class TeamManager : public ITeamManager
{
    Team *CreateTeam(int teamId, std::string teamName) override;
    Team *FindTeam(int teamId) override;
    void AddMemberToTeam(User *user, Team *team) override;
    void RemoveMemberFromTeam(User *user, Team *team) override;
};