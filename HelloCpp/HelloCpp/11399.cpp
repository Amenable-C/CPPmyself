// 정렬하고 수 * n하고 // 수는 넘어가고 // n은 작아지면서 총합구하기
#include <iostream>
#include <algorithm>
using namespace std;



int main() {
	int n, m, total =0;
	cin >> n;
	int a[1001] = {};
	for (int i = 0; i < n; i++) {
		cin >> m;
		a[i] = m;
	}
	sort(a, a + n);
	for (int i = 0; i < n; i++) {
		total = total + a[i] * (n-i);
		cout << a[i] << endl;
		
	}
	cout << total;
}