#include <iostream>
#include <vector>
#define MAX 8
using namespace std;

int arr[MAX];
bool visited[MAX];
vector<int> vec;
int cnt, n, m;

void Print() {
	for (int i = 0; i < vec.size(); i++) // arr의 사이즈가 아니라 vec의 사이즈
		cout << vec[i] << " ";
	cout << '\n';
	return;
}

void DFS(int cnt) {
	if (cnt == m) { // 길이가 같으면
		Print();
		return;
	}

	for (int i = 0; i < n; i++) {
		if (visited[i])
			continue; // 이미 방문한거면 생략
		visited[i] = true; // 지금 방문한거니깐 true로 바꿔주고
		vec.push_back(arr[i]); // 우리가 출력할 vec에 숫자 넣기
		DFS(cnt + 1); // 숫자를 넣은 상태에서 뒤에 따라오는거 계산
		vec.pop_back(); // 위에서 숫자넣고 이미 실행 했으니깐, 이제는 빼야됨. 그래야 다른 거 찾음.
		visited[i] = false; // 이렇게 2개를 신경써줘야지 continue가 되지않고 제대로 작동.
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