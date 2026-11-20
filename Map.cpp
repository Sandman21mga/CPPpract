#include "Map.h"

Map::Map(unsigned sizeX, unsigned sizeY) : _mapArray(sizeY, std::vector<char>(sizeX))// конструктор
{
    _sizeX = sizeX;
    _sizeY = sizeY;
}
void Map::GenerateMap()
{
    char exitFlag = 0;
    std::random_device rd;// Источник истинно случайного зерна от операционной системы
    std::mt19937 gen(rd());// Инициализация генератора Вихрь Мерсенна
    std::uniform_int_distribution<int> distrib(1, 100);// Определение диапазона (например, от 1 до 100)
    for(int i = 0; i < _sizeY; i++)
    {
        for(int j = 0;j < _sizeX;j++)
        {
            int randomValue = distrib(gen);
            if(i == 0 || i == _sizeY - 1 || j == 0 || j == _sizeX -1) {_mapArray[i][j] = '#';}
            else if(randomValue <= 40){_mapArray[i][j] = ' ';}
            else if(randomValue <= 70){_mapArray[i][j] = 'G';}
            else if(exitFlag == 0){exitFlag = 1; _mapArray[i][j] = 'E';}
            else _mapArray[i][j] = '#';
        }
    }
}

std::vector<char> &Map::operator[] (int index)
{
    return _mapArray[index];
}
const std::vector<char> &Map::operator[](int index) const
{
    return _mapArray[index];
}
bool Map::CheckExit(int heroPosX, int heroPosY)
{
    bool *tilesData = new bool [_sizeY*_sizeX];
    bool **usedTiles = new bool* [_sizeY];
    for(int i = 0; i < _sizeY; ++i)
        usedTiles[i] = &tilesData[i*_sizeX];
    memset(tilesData,0,_sizeY*_sizeX*sizeof(char ));
    bool foundExit = false;
    checkExitRecursive(usedTiles, foundExit, heroPosY, heroPosX);
    delete [](usedTiles);
    delete [](tilesData);
    return foundExit;
}
void Map::checkExitRecursive(bool **usedTiles, bool &foundExit, int heroPosY, int heroPosX)
{
    if(heroPosY >= _sizeY || heroPosX >= _sizeX || heroPosY < 0
        || heroPosX < 0 || usedTiles[heroPosY][heroPosX] == 1 || _mapArray[heroPosY][heroPosX] == '#' || foundExit == 1)
        return;
    else if(_mapArray[heroPosY][heroPosX] == 'E')
    {
        foundExit = true;
        return;
    }
    else
    {
        usedTiles[heroPosY][heroPosX] = 1;
        checkExitRecursive(usedTiles, foundExit,heroPosY - 1, heroPosX);
        checkExitRecursive(usedTiles, foundExit,heroPosY + 1, heroPosX);
        checkExitRecursive(usedTiles, foundExit, heroPosY, heroPosX - 1);
        checkExitRecursive(usedTiles, foundExit, heroPosY, heroPosX + 1);
    }
}
unsigned Map::getSizeX()
{
    return _sizeX;
}
unsigned Map::getSizeY()
{
    return _sizeY;
}
