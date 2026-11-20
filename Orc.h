
#ifndef ORC_H
#define ORC_H
#include "Monster.h"
class Orc : public Monster{
public:
    Orc(int PosX, int PosY, int Hp, Map& map);
    virtual ~Orc();

    void Turn(int shiftX, int shiftY) override;
};
#endif //ORC_H
