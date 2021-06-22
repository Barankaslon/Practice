#include <iostream>
#include <vector>

using namespace std;

int main() {
	cout << "How vectors work" << endl;

	vector <int> vector1;
	vector <int> vector2;

	vector1.push_back(10);
	vector1.push_back(20);
	vector1.push_back(100);
	vector1.push_back(200);

	vector2.push_back(1000);
	vector2.push_back(2000);
	vector2.push_back(3000);

	vector <vector<int>> test;

	test.push_back(vector1);
	test.push_back(vector2);

	cout << test.at(0).at(0) << endl;
	cout << test.at(0).at(1) << endl;
	cout << test.at(0).at(2) << endl;

	cout << test.at(1).at(0) << endl;
	cout << test.at(1).at(1) << endl;
	cout << test.at(1).at(2) << endl;

	return 0;
}
