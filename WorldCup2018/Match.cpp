#include "WorldCup.hpp"
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

vector<Shot> WroldCup::match(Team& home, Team& away){
	vector<Shot> result;
	int homeGoal = 0, awayGoal = 0;
	for (int i = 0; i < 9; i++) {
		result.push_back(Shot());
		srand((unsigned int)time(NULL));
		unsigned int currentTime = i * 10 + (rand() % 10);
		result[i].time = currentTime;
		bool goal = ((rand() % 10) <= 3);
		int teamInterval = home.getAbility() + away.getAbility() + 10;
		unsigned int teamRandom = rand() % teamInterval;
		Team& shotTeam = home;
		if (teamRandom >= home.getAbility() + 10) {
			shotTeam = away;
		}
		
	}
}