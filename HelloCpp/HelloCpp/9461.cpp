#include <iostream>
using namespace std;

long long P[101] = { 0, 1, 1, 1, 2, 2};

int main() {
	for (int i = 6; i < 101; i++) {
		P[i] = P[i - 1] + P[i - 5];
	}
	int n, m;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> m;
		cout << P[m] << '\n';
	}
	return 0;
}