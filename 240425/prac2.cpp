//240425.cpp : This file contains the 'main' function. Program execution begins and ends there.
//#include <iostream>

#include <iostream>
using namespace std;


int main()
{
	string info[5][4] = {
		{"�̸�", "����", "����", "����"},
		{"������", "19", "66", "68"},
		{"������", "20", "73", "94"},
		{"�谡��", "19", "58", "37"},
		{"������", "20", "82", "29"}
	};
	string age;
	int same_age[5] = { 0, 0, 0, 0, 0 };

	cout <<
		"������, ���� : 19, ���� : 66, ���� : 68 \n" <<
		"������, ���� : 20, ���� : 73, ���� : 94 \n" <<
		"�谡��, ���� : 19, ���� : 58, ���� : 37 \n" <<
		"������, ���� : 20, ���� : 82, ���� : 29 \n";

	// ���� �Է¹ޱ�

	cout << "���̸� �Է��ϼ���. \n";
	cin >> age;


	// ���� ���� ã��
	for (int i = 1; i <= 4; i++)
	{
		if (info[i][1] == age)
		{
			same_age[i] = 1;
		}
	}

	// ���
	for (int i = 1; i <= 4; i++)
	{
		if (same_age[i] == 1)
		{
			std::cout << info[i][0] << ", " << info[i][3] << "\n";
		}
	}

	return 0;
}
