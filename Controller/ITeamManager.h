// ITeam Interface
#include <iostream>
#include "Team.h"

class ITeamManager
{
public:
    virtual Team *CreateTeam(int teamId, std::string teamName) = 0;
    virtual Team *FindTeam(int teamId);
    virtual void AddMemberToTeam(User *user, Team *team) = 0;
    virtual void RemoveMemberFromTeam(User *user, Team *team) = 0;
};