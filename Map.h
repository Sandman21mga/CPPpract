
#ifndef DUNGEONCPP_MAP_H
#define DUNGEONCPP_MAP_H
#include <random>
#include <cstring>
#include <iostream>
//Класс - шаблон
//Объект - экземпляр класса
class Map
{
private:
    unsigned _sizeX;//Полей = переменные внутри класса = состояние
    unsigned _sizeY;
    char **_mapArray;
    char *_mapData;
private:
    void checkExitRecursive(bool **usedTiles, bool &foundExit, int heroPosY, int heroPosX);
public:
    Map(unsigned sizeX, unsigned sizeY);
    ~Map();

    char* operator[] (int index);// узбекский сеттер
    const char* operator[] (int index) const; //  узбекский геттер
    unsigned getSizeX();//геттер
    unsigned getSizeY();//геттер
    void GenerateMap();
    void DrawMap(int heroPosY, int heroPosX);//Функция внутри класса = методы
    bool CheckExit(int heroPosX, int heroPosY);
};

#endif //DUNGEONCPP_MAP_H
