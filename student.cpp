#include <iostream>
#include "student.h"
#include <vector>
#include <string>
#include <algorithm>
#include <memory>
using namespace std;
unique_ptr<StudentInfo> make_student(){
    unique_ptr<StudentInfo> pStudent(new StudentInfo);
    cin >> pStudent->name >> pStudent ->scores[0] >> pStudent->scores[1] >> pStudent->scores[2];
    pStudent->sum = pStudent ->scores[0] + pStudent ->scores[1] + pStudent ->scores[2];
    pStudent->average = (double)pStudent->sum / 3;
    return pStudent;
}

void print(const StudentInfo& si) {
    cout << si.name << "\t" << si.scores[0] << "\t"
         << si.scores[1] << "\t" << si.scores[2] << "\t"
         << si.sum << "\t" << si.average;
    cout << endl;

}

void print_all(const vector<unique_ptr<StudentInfo>>& vec) {
    vector<unique_ptr<StudentInfo>>::const_iterator p = vec.begin();
    for(int i = 0; i < vec.size(); i++)
        print(*p[i]);
}