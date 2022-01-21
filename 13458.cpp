#include <iostream>
#include <memory>
#include <cmath>

using namespace std;

int main() {
    int N; cin >> N;
    unique_ptr<int[]> A = std::make_unique<int[]>(N);
    int a;
    for(int i = 0; i < N; i++){
        cin >> a;
        A[i] = a;
    }
    int B, C;
    cin >> B >> C;

    int num = 0;
    for(int i = 0; i < N; i++){
        A[i] -= B; num++;
        int floorNum = ceil(float(A[i]) / float(C));
        num += floorNum;
    }
    std::cout << num;
}
