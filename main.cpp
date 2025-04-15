#include <iostream>
#include "Actor.h"
#include "Player.h"
#include "Monster.h"
using namespace std;

int main()
{
	APlayer Player;
	Player.HP;
	Player.MP;
	Player.GetGold();

	AMonster Goblin;
	Goblin.Run();
	AMonster Slime;
	Slime.Slide();
	AMonster Boar;
	Boar.Crash();

	return 0;
}
