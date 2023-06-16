// ITeam Interface
#include <iostream>
#include "Team.h"

class ITeamManager
{
public:
    virtual void CreateTeam();
    virtual void AddMemberToTeam(User *user, Team *team);
    virtual void RemoveMemberFromTeam(User *user, Team *team);
};