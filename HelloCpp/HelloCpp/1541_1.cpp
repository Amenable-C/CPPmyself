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
			num += input[i]; // �̷��� �׾Ҵٰ� �������� stoi�� �Ѵٴ°� // num �� int �� �ƴ϶� string �̶� �̷��� ���ϴ°�
		}
		if (input[i] == '-')
			isMinus = true; // -�� �ѹ������� �ڿ� ��� ���ִ°Ŷ� �̷��� �� ����
	}
	cout << result;
}