#ifndef HW46FIRST_CHAMPION_H
#define HW46FIRST_CHAMPION_H
#include <iostream>
#include <vector>
#include <functional>

using namespace std;

struct Champion{
    std::string name;
    int health;
    int attack;
};

auto findChampionMoreThanHealth(std::vector<Champion> champions, int health) {
    std::vector<Champion> result;
    for (auto& c : champions)
        if(c.health > health)
            result.push_back(c);
    return result;
}
auto findChampionMoreThanAttack(std::vector<Champion> champions, int attack) {
    std::vector<Champion> result;
    for (auto& c : champions)
        if(c.attack > attack)
            result.push_back(c);
    return result;
}
auto findChampionWithCondition(std::vector<Champion> champions, std::function<bool(Champion)> condition) {
    std::vector<Champion> result;
    for (auto& c : champions)
        if(condition(c))
            result.push_back(c);
    return result;
}
void printChampion(const std::vector<Champion> champions){
}

std::vector<Champion> createChampion() {
    std::vector<Champion> champions;
    // 여기는 아무것도 안했는데 왜 바로 만들어지는거지??
    Champion tryndamere {"Tryndamere", 625, 72};
    Champion kled {"Kled", 740, 35};
    Champion garen {"Garen", 620, 66};
    champions.push_back(tryndamere);
    champions.push_back(kled);
    return champions;
}

#endif //HW46FIRST_CHAMPION_H
