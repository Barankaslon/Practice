#include <iostream>

using namespace std;


class MyClass
{
	int* data;

public:
	MyClass(int size)
	{
		data = new int[size];
		for (int i = 0; i < size; i++)
		{
			data[i] = i;

			cout << data[i] <<"\t";
		}
		cout <<"Object "<< data << " CONSTRUCTOR" << endl;
	}

	~MyClass()
	{
		cout << "Object " << data << " DESTRUCTOR" << endl;
	}
};

void Foo()
{
	cout << "Start" << endl;
	MyClass a(100);
	cout << "End" << endl;
}

int main()
{
	Foo();

	return 0;
}