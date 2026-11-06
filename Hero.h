
#ifndef HERO_H
#define HERO_H
#include <iostream>

class Hero
{
private:
    int _HP;
    int _gold;
    int _heroPosX;
    int _heroPosY;
public:
    Hero(int HP, int gold);
    Hero();
    void TakeDamage(unsigned damage);
    void Check();
    void MoveX(int pos);
    void MoveY(int pos);

    int getHeroPosX();
    int getHeroPosY();
};

#endif //HERO_H
