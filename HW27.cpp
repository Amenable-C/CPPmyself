#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> vec;
    for(int i = 0; i < n; i++){
        int num; cin >> num;
        vec.push_back(num);
    }

    int order1; cin >> order1;
    vec.erase(vec.begin() + order1);

    int order2; cin >> order2;
    //cout << remove(vec.begin(), vec.end(), order2);

    int count = 0;
    for(auto it = vec.begin(); it != vec.end(); ++it){
        if(*it == order2){
            count++;
        }
    }
    remove(vec.begin(), vec.end(), order2);

    cout << vec.size() - count << endl;
    for(int i = 0; i < vec.size() - count ; i++){
        cout << vec[i] << " ";
    }

}
