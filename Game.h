
#ifndef GAME_H
#define GAME_H
#include "Map.h"
#include "Hero.h"
#include <sstream>
#include <string>
#include "MapPrinter.h"
#include "Rat.h"
#include "Orc.h"
#include "Thorn.h"
class Game
    {
private:
        std::vector<Entity*> entityVector;
Map map;
Hero hero;
private:
    void ToLowerString(std::string &str);
public:
        Game();

        void Start();
    };
#endif //GAME_H
