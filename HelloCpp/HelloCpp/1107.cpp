#include <iostream>
#include <string>
#include <cstdlib>
#include <algorithm>
using namespace std;

int INF = 1000001;
int noButton[10];

bool Possible(int num) {
	if (num == 0) {
		if (noButton[0] == 1)
			return false;
		else
			return true;
	}
	while (num) {
		if (noButton[num % 10] == 1) {
			return false;
		}
		num /= 10;
	}
	return true;
}

int getMinimum(int num) {
	int From100 = abs(num - 100);
	int Min = INF;
	int tmp;
	for (int i = 0; i <= INF; i++) {
		if (Possible(i)) {
			tmp = to_string(i).length(); // 길이는 왜 더하는거지??? -> 일단 번호로 접근하는거니깐
			tmp += abs(i - num); //일단 접근하고, 다시 num으로 +-이용해서 이동
			Min = min(Min, tmp); // Min값을 계속 갱신
		}
	}
	return min(From100, Min); // 위에서 말한 이동이 아예 없는거랑 비교.
}

int main() {
	int N, M;
	cin >> N >> M;
	for (int i = 0; i < M; i++) {
		int n;
		cin >> n;
		noButton[n] = 1;
	}
	cout << getMinimum(N) << endl;
	return 0;
}