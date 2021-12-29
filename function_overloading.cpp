#include <iostream>
#include <map>

using namespace std;
float totalMoney;

void addItem(std::map<std::string, int>& inventory, std::string item, int count) {
    inventory[item] += count;
}
//아이템과 돈을 획득해서 인벤토리에 추가하는 함수를 작성합니다.
void addItem(std::map<std::string, int>& inventory, std::string item, float money) {
    inventory[item]++;
    totalMoney += money;
}
int main(){
    std::map<std::string, int> inventory;
    addItem(inventory, "sword", 1);
    addItem(inventory, "shield", 2);
    addItem(inventory, "shield", 5.0F);
    addItem(inventory, "armor", 3.0F);

    cout << "MONEY " << totalMoney;
    for (const auto &[key, value] : inventory)
        std::cout << " " << key << " " << value;
}