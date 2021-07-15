#include <iostream>

using namespace std;

int main()
{
	const int SIZE = 5;
	int arr[SIZE]{ 4 ,5 ,65 ,79 ,1 };

	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << endl;
	}

	cout << "======================================" << endl;

	int *pArr = arr;

	cout << arr <<"\tarr" <<endl;
	cout << pArr << "\tpArr" << endl;
	for (int i = 0; i < SIZE; i++)
	{
		cout << *(pArr+i) << endl;
	}

	return 0;
}