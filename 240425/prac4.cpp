//240425
//�����Ҵ�

#include <iostream>
using namespace std;

int main() 
{
	int n;
	int sum = 0;
	int avg;

	cout << "�л� ���� �Է��ϼ��� : ";
	cin >> n;
	int* student = new int[n];

	//���� �Է¹ޱ�
	for (int i = 0; i < n; i++)
	{	
		cout << i+1 << "�� �л��� ������ �Է��ϼ��� : ";
		cin >> student[i];
	}


	//��� ����ϱ�
	for (int i = 0; i < n; i++)
	{
		sum += student[i];
	}
	avg = sum / n;
	cout << "���� ��� : " << avg;

	delete[] student;


	return 0;
}