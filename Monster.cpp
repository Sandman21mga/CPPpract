#include "Monster.h"
Monster::Monster(int PosX, int PosY, int Hp, char symbol, Map& map) : Entity(PosX, PosY, Hp, symbol,map)
{
    ++numberOfMonsters;
}
Monster::~Monster()
{
    --numberOfMonsters;
}
