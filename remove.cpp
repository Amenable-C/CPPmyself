#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int N;
    cin >> N;

    vector<int> vec;

    for(int i = 0; i < N; i++){
        int num;
        cin >> num;
        vec.push_back(num);
    }
    int eraseCount;
    cin >> eraseCount;

    vec.erase(vec.begin()+eraseCount);


    int eraseNum;
    cin >> eraseNum;

    int count = 0;
    for(vector<int>::iterator it = vec.begin(); it != vec.end(); ++it){
        if(*it == eraseNum)
            count++;
    }


    remove(vec.begin(), vec.end(), eraseNum);
    cout << vec.end() - vec.begin() - count << endl;
    for(vector<int>::iterator it = vec.begin(); it != vec.end()-count; ++it)
        cout << *it << " ";






}