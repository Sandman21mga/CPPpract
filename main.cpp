#include "Map.h"
#include "Hero.h"
#include <sstream>
#include <string>
#include <vector>

enum class FileCodes {READ_SUCCESS, READ_ERROR};

FileCodes ReadFile()
{
    return FileCodes::READ_SUCCESS;
}

void ToLowerString(std::string &str)
{
    for(char &sym : str)
        sym = (char)std::tolower(sym);
}


int main()
{
    const char *north = "north"; // Список команд
    const char *south = "south";
    const char *east = "east";
    const char *west = "west";
    const char *quit = "quit";
    const char *status = "status";
    const char *hit = "hit";
    const char *check = "check";

    const char *northShort = "n"; // Список команд
    const char *southShort = "s";
    const char *eastShort = "e";
    const char *westShort = "w";
    const char *quitShort = "q";
    const char *statusShort = "ss";
    const char *hitShort = "h";
    const char *checkShort = "c";

    if(FileCodes::READ_ERROR == ReadFile()) {
        std::cout << "Error reading file!" << '\n';
        return 0;
    }

    std::vector<std::string> inputVector;
    std::string input;

    Map map(10, 10);
    Hero hero;
    map.GenerateMap();
    while(true)
    {
        map.DrawMap(hero.getHeroPosY(), hero.getHeroPosX());

        std::cout << "Enter command: " << "\n";

        std::string line;
        std::getline(std::cin, line);
        std::stringstream stringstreams(line);
        while (stringstreams >> input)
        {
            ToLowerString(input);
            inputVector.push_back(input);
        }

        if(inputVector[0] == quit || inputVector[0] == quitShort) break; // Цикл проверки команд
        else if(inputVector[0] == north  || inputVector[0] == northShort) hero.MoveY(-1);
        else if(inputVector[0] == south  || inputVector[0] == southShort)  hero.MoveY(1);
        else if(inputVector[0] == east || inputVector[0] == eastShort) hero.MoveX(1);
        else if(inputVector[0] == west || inputVector[0] == westShort) hero.MoveX(-1);
        else if(inputVector[0] == status || inputVector[0] == statusShort) hero.Check();
        else if(inputVector[0] ==check  || inputVector[0] == checkShort)
        {
            if(map.CheckExit(hero.getHeroPosX(), hero.getHeroPosY()))
                printf("Exit is reachable!\n");
            else
                printf("Exit is not reachable!\n");
        }
        else if(inputVector[0] == hit  || inputVector[0] == hitShort) {
            int damage = std::stoi(inputVector[1]);
            hero.TakeDamage(damage);
        }

        else printf("Commands: north, south, east, west, quit,\n"
                    " status, hit (N), check\n");
    }
}
