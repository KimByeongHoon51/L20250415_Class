#include <iostream>
#include "Actor.h"
#include "Player.h"
#include "Monster.h"
#include "Goblin.h"
#include "Slime.h"
#include "Boar.h"
using namespace std;

int main()
{
	APlayer Player;
	Player.HP;
	Player.MP;
	Player.CatchMonster();
	Player.GetGold();

	AGoblin Goblin;
	Goblin.Run();
	ASlime Slime;
	Slime.Slide();
	ABoar Boar;
	Boar.Crash();

	return 0;
}
