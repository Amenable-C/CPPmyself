#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	vector<string> croatian = {"c=","c-","dz=","d-","lj","nj","s=","z=" };
	int idx;
	string str;
	cin >> str;
	for (int i = 0; i < croatian.size(); i++)
	{
		while (1) {
			idx = str.find(croatian[i]); // 문자열 시작의 위치
			if (idx == string::npos)
				break;
			str.replace(idx, croatian[i].length(), "#"); // 문자열 시작위치 + 문자열 길이를 이용해서 문자를 #으로 바꾸기
		}
	}
	cout << str.length();

}