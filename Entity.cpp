#include "Entity.h"
Entity::Entity(int PosX, int PosY, int Hp, const char symbol, Map& map) :_HP(Hp), _PosX(PosX), _PosY(PosY),
                                                                        _symbol(symbol), map(map){}
Entity::~Entity()
{
}
