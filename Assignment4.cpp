#include "shape.h"
#include <iostream>
#include <algorithm>
#include <numeric>
#include <memory>
using namespace std;


int main() {
    vector<unique_ptr<Rectangle>> rvec;
    vector<unique_ptr<Circle>> cvec;
    while(true) {
        string cmd;
        cin >> cmd;
        transform(begin(cmd), end(cmd), begin(cmd),  [](char& c){return toupper(c);}); // 대문자 변경
        Command c = getCommand(cmd); // 반환값이 enum중에 하나로 해야한다는 건가?
        switch(c){
            case RECT:
                rvec.emplace_back(make_rectangle());
                break;
            case CIRCLE:
                cvec.emplace_back(make_circle());
                break;
            case CLEAR:
                rvec.clear(); cvec.clear();
                break;
            case PRINT:{
                for(int i = 0; i < rvec.size(); i++){
                    cout << "Rectangle:" << "\t" << rvec[i]->width << "\t" << rvec[i]->height << "\t" << rvec[i]->area << endl;
                }
                for(int i = 0; i < cvec.size(); i++){
                    cout << "Cicle:" << "\t" << cvec[i]->radius << "\t" << cvec[i]->area << endl;
                }
                break;
            }
            case SUM:{
                int rvecSum = accumulate(rvec.begin(), rvec.end(), 0, [](int sum, const unique_ptr<Rectangle>& a){return sum + a->area;});
                int cvecSum = accumulate(cvec.begin(), cvec.end(), 0, [](int sum, const unique_ptr<Circle>& a){return sum + a->area;});
                cout << rvecSum + cvecSum << endl;
                break;
            }
            case SORT:{
                sort(rvec.begin(), rvec.end(), [](const unique_ptr<Rectangle>& a, const unique_ptr<Rectangle>& b)->bool{return ((a->area) > (b->area));});
                sort(cvec.begin(), cvec.end(), [](const unique_ptr<Circle>& a, const unique_ptr<Circle>& b)->bool{return ((a->area) > (b->area));});
                break;
            }
            case QUIT:
                return 0;
            case INVALID:
                cout << "Invalid Command" << '\n';
                break;
        }
    }
}



