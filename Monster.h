
#ifndef MONSTER_H
#define MONSTER_H
#include "Entity.h"
class Monster : public Entity
    {
protected:
        static inline int numberOfMonsters;
public:
        Monster(int PosX, int PosY, int Hp, char symbol, Map& map);
        virtual ~Monster();

    virtual void Turn(int shiftX, int shiftY) = 0;
};


#endif //MONSTER_H
