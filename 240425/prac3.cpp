//240425

#include <iostream>
using namespace std;

void reverse(int *x)
{
	int new_arr[5] = { 0, 0, 0, 0, 0 };
	for (int i = 0; i < 5; i++)
	{
		new_arr[i] = x[4 - i];
	}
	for (int i = 0; i < 5; i++)
	{
		*(x + i) = new_arr[i];
	}
	cout << *x;
	cout << endl;

}


int main()
{
	//배열은 원래 포인터
	int ori_arr[5] = { 5, 4, 3, 2, 1 };

	reverse(ori_arr);
	for (int i = 0; i < 4; i++)
	{
		cout << ori_arr[i];
	}

	return 0;
}