
#ifndef HERO_H
#define HERO_H
#include <iostream>
#include "Entity.h"
class Hero : public Entity
{
private:
    int _gold;
public:
    Hero(Map& map, int Hp = 10, int gold = 0);
    void TakeDamage(int damage);
    void Check();
    void MoveX(int pos);
    void MoveY(int pos);
    void Turn(int shiftX, int shiftY) override;

    int getHeroPosX();
    int getHeroPosY();
};

#endif //HERO_H
