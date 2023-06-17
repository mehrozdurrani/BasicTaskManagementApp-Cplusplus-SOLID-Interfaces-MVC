
#include "ITeamManager.h"

class TeamManager : public ITeamManager
{
public:
    Team *CreateTeam(int teamId, std::string teamName) override;
    Team *FindTeam(int teamId) override;
    void RemoveTeam(int teamId) override;
    std::vector<Team *> GetAllTeams() override;
    void AddMemberToTeam(User *user, Team *team) override;
    void RemoveMemberFromTeam(User *user, Team *team) override;

private:
    std::vector<Team *> teams;
};