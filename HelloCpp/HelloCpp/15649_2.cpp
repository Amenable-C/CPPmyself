#include <iostream>
#include <vector>
#define MAX 8
using namespace std;

int arr[MAX];
bool visited[MAX];
vector<int> vec;
int cnt, n, m;

void Print() {
	for (int i = 0; i < vec.size(); i++) // arr�� ����� �ƴ϶� vec�� ������
		cout << vec[i] << " ";
	cout << '\n';
	return;
}

void DFS(int cnt) {
	if (cnt == m) { // ���̰� ������
		Print();
		return;
	}

	for (int i = 0; i < n; i++) {
		if (visited[i])
			continue; // �̹� �湮�ѰŸ� ����
		visited[i] = true; // ���� �湮�ѰŴϱ� true�� �ٲ��ְ�
		vec.push_back(arr[i]); // �츮�� ����� vec�� ���� �ֱ�
		DFS(cnt + 1); // ���ڸ� ���� ���¿��� �ڿ� ������°� ���
		vec.pop_back(); // ������ ���ڳְ� �̹� ���� �����ϱ�, ������ ���ߵ�. �׷��� �ٸ� �� ã��.
		visited[i] = false; // �̷��� 2���� �Ű������� continue�� �����ʰ� ����� �۵�.
	}
}


int main() {
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		arr[i] = i + 1;
		visited[i] = false;
	}
	DFS(0);
}