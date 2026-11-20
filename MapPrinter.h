
#ifndef MAPPRINTER_H
#define MAPPRINTER_H
#include "Map.h"
class MapPrinter
    {
private:
         Map& map;
public:
        MapPrinter(Map& map);

        void DrawMap(int heroPosY, int heroPosX);//Функция внутри класса = методы
};
#endif //MAPPRINTER_H
