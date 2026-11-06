#include "Hero.h"

void Hero::TakeDamage(unsigned damage)
{
    _HP -= damage;
}
void Hero::Check()
{
    std::cout << "HP = "<< _HP << "Gold = " << _gold << "\n";
}
void Hero::MoveX(int pos)
{
    _heroPosX += pos;
}
void Hero::MoveY(int pos)
{
    _heroPosY += pos;
}
Hero::Hero(int HP, int gold)
{
    this->_HP = HP;
    this->_gold = gold;
    this->_heroPosY = 1;
    this->_heroPosX = 1;
}
Hero::Hero()
{
    this->_HP = 10;
    this->_gold = 0;
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
