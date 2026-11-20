
#ifndef HERO_H
#define HERO_H
#include <iostream>
#include "Map.h"
class Hero
{
private:
    int _HP;
    int _gold;
    int _heroPosX;
    int _heroPosY;
    Map& map;
public:
    Hero(Map& map, int HP = 10, int gold = 0);
    void TakeDamage(unsigned damage);
    void Check();
    void MoveX(int pos);
    void MoveY(int pos);

    int getHeroPosX();
    int getHeroPosY();
};

#endif //HERO_H
