#include <iostream>
#include "ITeamManager.h"

class ViewManager
{
public:
    void ViewAllTeams(ITeamManager *teamManager);
    void ViewAllTeamMembers(Team *team);
    void ViewUserTasks(User *user);
};