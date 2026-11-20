#include "Thorn.h"
void Thorn::Turn(int shiftX, int shiftY){}
Thorn::Thorn(int PosX, int PosY, int Hp, Map &map): Monster(PosX, PosY, Hp, 'T', map){}
Thorn::~Thorn()
{
}
