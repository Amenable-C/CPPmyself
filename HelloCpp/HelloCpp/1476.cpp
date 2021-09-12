#include <iostream>
using namespace std;

int E, S, M;

int calculateYear() {
	int result;
	int year = 1;
	while (true) {
		if ((year - E) % 15 == 0 && (year - S) % 28 == 0 && (year - M) % 19 == 0) {
			result = year;
			break;
		}
		year++;
	}
	return result;
}

int main() {
	cin >> E >> S >> M;
	cout << calculateYear() << endl;
	return 0;
}