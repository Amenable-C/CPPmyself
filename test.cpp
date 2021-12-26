#include <iostream>
#include <memory>
using namespace std;

int main() {
    unique_ptr<int> pui {new int(3)}; // pui
    auto pui2 = make_unique<int>(3); // pui2
    int* pint = pui2.get(); // pint
    unique_ptr<string> pustr {new string}; // pustr
    pustr->assign("hello world");
    unique_ptr<int[]> puarr{new int[3]};
    for(int i = 0; i < 3; ++i)
        puarr[i] = i + 2;
    int b;
}
