#include <iostream>
#include "Actor.h"
using namespace std;

class APlayer : public AActor
{
public:
	int HP;
	int MP;
	void CatchMonster();
	void GetGold();
};

class AMonster : public AActor
{
public:
	void Run();
	void Slide();
	void Crash();
};

void APlayer::CatchMonster()
{
}

void APlayer::GetGold()
{
}

void AMonster::Run()
{
}

void AMonster::Slide()
{
}

void AMonster::Crash()
{
}

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
