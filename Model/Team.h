// Team Class
#include <iostream>
#include <vector>
#include "User.h"

class Team
{
public:
    Team();
    ~Team();
    void SetTeamId(int teamId);
    int GetTeamId();
    void SetTeamName(std::string teamName);
    std::string GetTeamName();
    std::vector<User *> GetTeamMembersList();

private:
    int teamId;
    std::string teamName;
    std::vector<User *> users; // ## when it doesnt violate the Dpendency Inversion Principle
};