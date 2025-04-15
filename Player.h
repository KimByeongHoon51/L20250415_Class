#pragma once
#include "Actor.h"

class APlayer : public AActor
{
public:
	int HP;
	int MP;
	void CatchMonster();
	void GetGold();
};

