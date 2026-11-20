
#ifndef ENTITY_H
#define ENTITY_H
#include "Map.h"
class Entity{
protected:
    int _HP;
    int _PosX;
    int _PosY;
    const char _symbol;
    Map& map;
public:
    virtual ~Entity();
    Entity(int PosX, int PosY, int Hp, const char symbol, Map& map);

    virtual void Turn(int shiftX, int shiftY) = 0;//Chistaya funkchia
};
#endif //ENTITY_H
