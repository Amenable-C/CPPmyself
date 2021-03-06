#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int test_case; 
	cin >> test_case; // 라인 개수 정하기
	string bufferflush; 
	getline(cin, bufferflush); // 버퍼 없애기

	for (int t = 0; t < test_case; t++)
	{
		string s;
		getline(cin, s);

		string temp;
		for (int i = 0; i < s.length(); i++)
		{
			if (s[i] == ' ')
			{
				reverse(temp.begin(), temp.end());
				cout << temp << " ";
				temp.clear();
			}
			else
				temp += s[i];
		}
		reverse(temp.begin(), temp.end());
		cout << temp << "\n";
	}
	return 0;
}