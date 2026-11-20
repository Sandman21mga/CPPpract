
#ifndef RAT_H
#define RAT_H
#include "Monster.h"
class Rat : public Monster{
private:

public:
    Rat(int PosX, int PosY, int Hp, Map& map);
    virtual ~Rat();

    void Turn(int shiftX, int shiftY) override;
};

#endif //RAT_H
