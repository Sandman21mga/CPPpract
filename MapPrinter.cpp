#include "MapPrinter.h"
MapPrinter::MapPrinter(Map &map) :map(map){}

void MapPrinter::DrawMap(int heroPosY, int heroPosX)
{
    for(unsigned y = 0; y < map.getSizeY(); ++y)
    {
        for(unsigned x = 0; x < map.getSizeX(); ++x)
        {
            if(y == heroPosY && x == heroPosX) printf("P");
            else std::cout <<map[y][x];
        }
        std::cout << "\n";
    }
}
