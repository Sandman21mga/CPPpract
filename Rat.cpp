#include "Rat.h"
void Rat::Turn(int shiftX, int shiftY)
{
_PosX += shiftX;
_PosY += shiftY;
}
Rat::Rat(int PosX, int PosY, int Hp, Map &map): Monster(PosX, PosY, Hp, 'R', map){}
Rat::~Rat()
{

}
