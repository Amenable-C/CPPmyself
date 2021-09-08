#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main() {
	string str;
	cin >> str;
	sort(str.begin(), str.end(), greater<char>()); // greater<char>()넣으면 내림차순
	cout << str;
}