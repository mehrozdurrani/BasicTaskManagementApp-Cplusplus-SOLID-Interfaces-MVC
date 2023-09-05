#include <iostream>

#include "ITeamManager.h"
#include "IUserManager.h"
#include "ITaskManager.h"
#include "TeamManager.h"
#include "UserManager.h"
#include "TaskManager.h"
#include "ViewManager.h"

int main()
{
    ITeamManager *teamManager = new TeamManager();
    IUserManager *userManager = new UserManager();
    ITaskManager *taskManager = new TaskManager();
    ViewManager *viewManager = new ViewManager();

    Team *team = teamManager->CreateNewTeam(1, "The Winning Team");

    User *user1 = userManager->CreateNewUser(1, "Mehroz Durrani");
    User *user2 = userManager->CreateNewUser(2, "Jon Doe");

    teamManager->AddMemberToTeam(user1, team);
    teamManager->AddMemberToTeam(user2, team);

    Task *task1 = taskManager->CreateNewTask(1, "Get Module 1 done", "17/01/2023", "High", "In Progress");
    Task *task2 = taskManager->CreateNewTask(1, "Get Module 2 done", "17/01/2023", "Medium", "In Todo");

    taskManager->AssignTaskToUser(task1, user1);
    taskManager->AssignTaskToUser(task2, user2);

    viewManager->ViewAllTeams(teamManager);
    viewManager->ViewAllTeamMembers(team);
    viewManager->ViewUserTasks(user1);
    viewManager->ViewUserTasks(user2);
    return 0;
}