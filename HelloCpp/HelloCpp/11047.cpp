#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int cmp(int a, int b) {
	return a > b;
}

int main() {
	int n, k, ans = 0;
	cin >> n >> k;
	vector<int> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	sort(v.begin(), v.end(), cmp); // cmp라는 것을 이용해서 내림차순으로 정렬했음.
	for (int i = 0; i < n; i++) {
		while (k - v[i] >= 0) {
			ans++;
			k -= v[i];
		}
		// 이렇게 하면 큰 동전으로 계산이 안 될때까지 다 돌리고, 다음으로 작은 동전으로 넘어감.
	}
	cout << ans << '\n';
}