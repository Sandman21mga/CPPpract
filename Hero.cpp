#include "Hero.h"

void Hero::TakeDamage(unsigned damage)
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
    if(_heroPosX + pos >= 0 && _heroPosX + pos <= map.getSizeX()) _heroPosX += pos;//инвариант
}
void Hero::MoveY(int pos)
{
    if(_heroPosY + pos >= 0 && _heroPosY + pos <= map.getSizeY()) _heroPosY += pos;//инвариант
}
Hero::Hero(Map& map, int HP, int gold) :map(map)
{
    this->_HP = HP;
    this->_gold = gold;
    this->_heroPosY = 1;
    this->_heroPosX = 1;
}
int Hero::getHeroPosX()
{
    return _heroPosX;
}
int Hero::getHeroPosY()
{
    return _heroPosY;
}
