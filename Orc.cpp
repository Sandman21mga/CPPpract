
#include "Orc.h"

void Orc::Turn(int shiftX, int shiftY)
{
    _PosX += shiftX;
    _PosY += shiftY;
}
Orc::Orc(int PosX, int PosY, int Hp, Map &map): Monster(PosX, PosY, Hp, 'O', map){}
Orc::~Orc()
{

}
