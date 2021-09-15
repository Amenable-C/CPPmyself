#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<pair<int, int>> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i].second >> a[i].first; // (������ �ð�, ������ �ð�) �̷��� ����.
	}
	sort(a.begin(), a.end()); // ������������ ����
	int savetime = 0, ans = 0;
	for (int i = 0; i < n; i++) { // ������ �ð��� �������� ������������ �ؼ�, �ִ��� ���� ȸ�Ǹ� �����ϵ��� ��.
		if (savetime <= a[i].second) { // ����ȸ�� ������ �ð� <= ���� ȸ�� ���۽ð�
			savetime = a[i].first;
			ans++;
		}
	}
	cout << ans;
}