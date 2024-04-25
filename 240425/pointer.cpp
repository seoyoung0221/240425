//240425
//pointer
//포인터 : 주소저장변수 *사용

#include <iostream>
using namespace std;

string _global_name; //전역변수

void changeValue1(int x) 
//main 문의 x에 영향을 줄 수는 없음
//값이 복사되어 작동
//{}를 나가면 저장공간에서 사라짐
{
	//공간1(scope1)
	x = 20;
}

void changeValue2(int* x)
{
	*x = 20;
}

//공간2(scope2)
int main() {
	//공간3(scope3)

	int *p; //포인터 변수 선언
	int n = 10;
	int x = 10;

	p = &n; //주소값 가져오기

	cout << p << endl; //p에는 n의 주소값이 저장되어 있음
	cout << *p << endl; //*p는 주소값에 저장되어 있는 실제 값에 접근 > 10 출력

	cout << "x before function call: " << x  << endl;
	changeValue1(x);
	cout << "x after function call: " << x << endl;
	/*
	if (x = 10) {
		//공간4(scope4)
		int x = 100;
		cout << "x in if : " << x; //100
	}
	*/

	cout << "x before function call: " << x << endl;
	changeValue2(&x);
	cout << "x after function call: " << x << endl;



	return 0;
}

//call by value >> 내용 복사 >> 시간 오래걸림
//call by reference >> 복사 x >> 시간 단축