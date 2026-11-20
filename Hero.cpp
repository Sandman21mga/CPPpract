#include "Hero.h"

void Hero::TakeDamage(int damage)
{
    _HP -= damage;
    if(_HP < 0) _HP = 0;//инвариант
}
void Hero::Check()
{
    std::cout << "HP = "<< _HP << "Gold = " << _gold << "\n";
}
void Hero::MoveX(int pos)
{
    if(_PosX + pos >= 0 && _PosX + pos <= map.getSizeX()) _PosX += pos;//инвариант
}
void Hero::MoveY(int pos)
{
    if(_PosY + pos >= 0 && _PosY + pos <= map.getSizeY()) _PosY += pos;//инвариант
}
Hero::Hero(Map& map,int HP, int gold) :Entity(1,1,HP,'P', map)
{
    this->_gold = gold;
}
int Hero::getHeroPosX()
{
    return _PosX;
}
int Hero::getHeroPosY()
{
    return _PosY;
}
void Hero::Turn(int shiftX, int shiftY){;}
