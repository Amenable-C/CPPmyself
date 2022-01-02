#include <iostream>
#include "Champion.h"

int main() {
    string str;
    cin >> str;
    cout << *str.begin() << *str.end() << endl;
    cout << str.find(":") << endl;

    string newStr[str.size() - str.find(":")];
    int start = str.find(":") + 1;
    for(int i = 0; i < str.size() - str.find(":"); i++){
        newStr[i] = str[start+i];
    }
    cout << newStr;
    return 0;


    std::function<bool(Champion)> condition1 = [ ] (Champion c) { return c.health > 700; } ;
    std::function<bool(Champion)> condition2 = [ ] (Champion c) { return c.attack > 70; } ;
    auto result3 = findChampionWithCondition (createChampion(), condition1);
    auto result4 = findChampionWithCondition (createChampion(), condition2);
}
