
#ifndef THORN_H
#define THORN_H
#include "Monster.h"
class Thorn : public Monster{
public:
    Thorn(int PosX, int PosY, int Hp, Map& map);
    virtual ~Thorn();

    void Turn(int shiftX, int shiftY) override;
};
#endif //THORN_H
