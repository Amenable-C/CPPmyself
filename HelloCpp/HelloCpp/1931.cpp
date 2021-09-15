#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<pair<int, int>> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i].second >> a[i].first; // (끝나는 시간, 시작한 시간) 이렇게 만듦.
	}
	sort(a.begin(), a.end()); // 오름차순으로 정렬
	int savetime = 0, ans = 0;
	for (int i = 0; i < n; i++) { // 끝나는 시각을 기준으로 오름차순으로 해서, 최대한 많은 회의를 진행하도록 함.
		if (savetime <= a[i].second) { // 이전회의 끝나는 시각 <= 다음 회의 시작시각
			savetime = a[i].first;
			ans++;
		}
	}
	cout << ans;
}