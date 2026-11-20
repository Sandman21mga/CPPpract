#include "Monster.h"
Monster::Monster()
{
    ++numberOfMonsters;
}
Monster::~Monster()
{
    --numberOfMonsters;
}
