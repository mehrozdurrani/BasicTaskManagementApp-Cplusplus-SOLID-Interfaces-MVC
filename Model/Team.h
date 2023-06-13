// Team Class
#include <iostream>
#include <vector>
#include "User.h"

class Team
{
public:
    Team();
    ~Team();

    void SetTeamName(std::string name);
    void AddTeamMember(User *user);
    void RemoveTeamMember(User *user);
    std::vector<User *> GetTeamMembersList();
    std::string GetTeamName();

private:
    std::string teamName;
    std::vector<User *> users; // ## when it doesnt violate the Dpendency Inversion Principle
};