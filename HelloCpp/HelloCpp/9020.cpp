#include <iostream>
using namespace std;
int main() {
	int t, n;
	bool num[10002];
	for (int i = 0; i <= 10001; i++) {
		num[i] = true;
	}
	num[1] = false;
	for (int i = 2; i * i <= 10001; i++) {
		if (num[i]) {
			for (int j = i * i; j <= 10001; j = j + i) {
				num[j] = false;
			}
		}
	}
	cin >> t;
	while (t--) {
		cin >> n;
		for (int i = n / 2; i > 0; i--) {
			if (num[i] && num[n - i]) {
				cout << i << ' ' << n - i << '\n';
				break;
			}
		}
	}
	return 0;
}