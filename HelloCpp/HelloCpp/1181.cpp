#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compareWith(string a, string b) {
	if (a.length() == b.length())
		return a < b;
	return a.length() < b.length();
}


int main() {
	int N;
	vector<string> vec;
	cin >> N;
	for (int i = 0; i < N; i++) {
		string str;
		cin >> str;
		if (find(vec.begin(), vec.end(), str) == vec.end()) // 해당 단어가 없으면 vec.end()를 반환하는 특성
			vec.push_back(str); // 없으면 넣는다는 말
	}
	sort(vec.begin(), vec.end(), compareWith);

	for (int i = 0; i < vec.size(); i++) {
		cout << vec[i] << '\n';
	}
}