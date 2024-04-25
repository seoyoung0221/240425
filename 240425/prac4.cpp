//240425
//동적할당

#include <iostream>
using namespace std;

int main() 
{
	int n;
	int sum = 0;
	int avg;

	cout << "학생 수를 입력하세요 : ";
	cin >> n;
	int* student = new int[n];

	//성적 입력받기
	for (int i = 0; i < n; i++)
	{	
		cout << i+1 << "번 학생의 점수를 입력하세요 : ";
		cin >> student[i];
	}


	//평균 계산하기
	for (int i = 0; i < n; i++)
	{
		sum += student[i];
	}
	avg = sum / n;
	cout << "성적 평균 : " << avg;

	delete[] student;


	return 0;
}