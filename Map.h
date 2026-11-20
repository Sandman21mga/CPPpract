
#ifndef DUNGEONCPP_MAP_H
#define DUNGEONCPP_MAP_H
#include <random>
#include <cstring>
#include <iostream>
#include <vector>
//Класс - шаблон
//Объект - экземпляр класса
class Map
{
private:
    std::vector<std::vector<char>> _mapArray;
    unsigned _sizeX;//Полей = переменные внутри класса = состояние
    unsigned _sizeY;
private:
    void checkExitRecursive(bool **usedTiles, bool &foundExit, int heroPosY, int heroPosX);
public:

    Map(unsigned sizeX, unsigned sizeY);

    std::vector<char>& operator[] (int index);// узбекский сеттер
    const std::vector<char>& operator[] (int index) const; //  узбекский геттер
    unsigned getSizeX();//геттер
    unsigned getSizeY();//геттер
    void GenerateMap();
    bool CheckExit(int heroPosX, int heroPosY);
};

#endif //DUNGEONCPP_MAP_H
