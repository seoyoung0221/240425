//240425
//pointer
//������ : �ּ����庯�� *���

#include <iostream>
using namespace std;

string _global_name; //��������

void changeValue1(int x) 
//main ���� x�� ������ �� ���� ����
//���� ����Ǿ� �۵�
//{}�� ������ ����������� �����
{
	//����1(scope1)
	x = 20;
}

void changeValue2(int* x)
{
	*x = 20;
}

//����2(scope2)
int main() {
	//����3(scope3)

	int *p; //������ ���� ����
	int n = 10;
	int x = 10;

	p = &n; //�ּҰ� ��������

	cout << p << endl; //p���� n�� �ּҰ��� ����Ǿ� ����
	cout << *p << endl; //*p�� �ּҰ��� ����Ǿ� �ִ� ���� ���� ���� > 10 ���

	cout << "x before function call: " << x  << endl;
	changeValue1(x);
	cout << "x after function call: " << x << endl;
	/*
	if (x = 10) {
		//����4(scope4)
		int x = 100;
		cout << "x in if : " << x; //100
	}
	*/

	cout << "x before function call: " << x << endl;
	changeValue2(&x);
	cout << "x after function call: " << x << endl;



	return 0;
}

//call by value >> ���� ���� >> �ð� �����ɸ�
//call by reference >> ���� x >> �ð� ����