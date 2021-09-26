#include <iostream>
#include <string>
using namespace std;

int main() {
	string input;
	cin >> input;

	int result = 0;
	string num;
	bool isMinus = false;

	for (int i = 0; i <= input.size(); i++) {
		if (input[i] == '-' || input[i] == '+' || i == input.size()) {
			if (isMinus) {
				result -= stoi(num);
				num = "";
			}
			else {
				result += stoi(num);
				num = "";
			}
		}
		else {
			num += input[i]; // 이렇게 쌓았다가 마지막에 stoi를 한다는거 // num 이 int 가 아니라 string 이라서 이렇게 더하는거
		}
		if (input[i] == '-')
			isMinus = true; // -가 한번나오면 뒤에 계속 빼주는거라서 이렇게 딱 설정
	}
	cout << result;
}