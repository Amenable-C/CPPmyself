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
			tmp = to_string(i).length(); // ���̴� �� ���ϴ°���??? -> �ϴ� ��ȣ�� �����ϴ°Ŵϱ�
			tmp += abs(i - num); //�ϴ� �����ϰ�, �ٽ� num���� +-�̿��ؼ� �̵�
			Min = min(Min, tmp); // Min���� ��� ����
		}
	}
	return min(From100, Min); // ������ ���� �̵��� �ƿ� ���°Ŷ� ��.
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