//240425.cpp : This file contains the 'main' function. Program execution begins and ends there.
//#include <iostream>

#include <iostream>
using namespace std;


int main()
{
	string info[5][4] = {
		{"이름", "나이", "국어", "수학"},
		{"방지턱", "19", "66", "68"},
		{"정직한", "20", "73", "94"},
		{"김가루", "19", "58", "37"},
		{"조나단", "20", "82", "29"}
	};
	string age;
	int same_age[5] = { 0, 0, 0, 0, 0 };

	cout <<
		"방지턱, 나이 : 19, 국어 : 66, 수학 : 68 \n" <<
		"정직한, 나이 : 20, 국어 : 73, 수학 : 94 \n" <<
		"김가루, 나이 : 19, 국어 : 58, 수학 : 37 \n" <<
		"조나단, 나이 : 20, 국어 : 82, 수학 : 29 \n";

	// 나이 입력받기

	cout << "나이를 입력하세요. \n";
	cin >> age;


	// 같은 나이 찾기
	for (int i = 1; i <= 4; i++)
	{
		if (info[i][1] == age)
		{
			same_age[i] = 1;
		}
	}

	// 출력
	for (int i = 1; i <= 4; i++)
	{
		if (same_age[i] == 1)
		{
			std::cout << info[i][0] << ", " << info[i][3] << "\n";
		}
	}

	return 0;
}
