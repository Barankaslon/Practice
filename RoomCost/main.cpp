#include <iostream>

using std::cout;
using std::cin;
using std::endl;






int main() {
	int numberOfRooms;
	int pricePerRoom = 30;
	const int valid = 30;


	cout << "Hello, welcome to Gvozd Carpet Cleaning Service (GCCS)" << endl;

	cout << "Enter number of the rooms: " << endl;
	cin >> numberOfRooms;
	cout << "Number of Rooms : " << numberOfRooms << endl;
	cout << "Price per Room: $" << pricePerRoom << endl;

	int cost = (numberOfRooms * pricePerRoom);
	float tax = cost * 0.15;
	float totalCost = cost + tax;

	cout << "Cost: $" << cost << endl;
	cout << "Tax: $" << tax << endl;

	cout << "Total estimate: " << totalCost << endl;
	cout << "This estimate is valid for " << valid << " days" << endl;

	return 0;
}
