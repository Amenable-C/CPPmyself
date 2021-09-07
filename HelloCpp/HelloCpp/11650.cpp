#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	int N;
	cin >> N;
	vector<vector<int>>	arr(N, vector<int>(2, 0)); // N * 2 사이즈인 int형 벡터 arr을 0으로 초기화 // 이거 기억
	for (int i = 0; i < N; i++) {
		cin >> arr[i][0];
		cin >> arr[i][1];
	}
	sort(arr.begin(), arr.end()); // 이렇게하면 다 정렬됨

	for (int i = 0; i < arr.size(); i++) {
		cout << arr[i][0] << " " << arr[i][1] << "\n";
	}
}