#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;
vector<int> arr;

int main() {
	int num, tmp, range, middle = 0, most_val, mean = 0;
	int most = -9999;
	int number[8001] = { 0, };
	bool not_first = false;
	cin >> num;
	for (int i = 0; i < num; i++)
	{
		cin >> tmp;
		arr.push_back(tmp);
		mean += tmp;
		number[tmp + 4000]++; // 최빈값을 알기위해
	}
	sort(arr.begin(), arr.end());
	for (int i = 0; i < 8001; i++)
	{
		if (number[i] == 0)
			continue;
		if (number[i] == most) // 최빈값이 하나가 아닐때
		{
			if (not_first) // 이것의 역할이 두번째 최빈값이 나왔을때 그 후로는 무시한다는거
			{
				most_val = i - 4000;
				not_first = false;
			}
		}
		if (number[i] > most)
		{
			most = number[i]; // 가장 많이 나타난 횟수
			most_val = i - 4000; // 최빈값
			not_first = true;
		}
	}
	middle = arr[arr.size() / 2]; // 크기가 중인인 것의 중앙
	mean = round((float)mean / num); // 위에서는 mean이 전체 합
	range = arr.back() - arr.front();
	cout << mean << '\n' << middle << '\n' << most_val << '\n' << range;

}