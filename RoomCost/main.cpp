#include <iostream>

using std::cout;
using std::cin;
using std::endl;



int main() {

	int numberOfRooms;


	cout << "Hello, You are NOTwelcome to Gvozd Carpet Cleaning Service (GCCS)" << endl;

	cout << "Enter number of the rooms: " << endl;
	cin >> numberOfRooms;
	int pricePerRoom {34};
	const int valid {30};
	cout << "Number of Rooms : " << numberOfRooms << endl;
	cout << "Price per Room: $" << pricePerRoom << endl;

	int cost = (numberOfRooms * pricePerRoom);
	float tax = cost * 0.15;
	float totalCost = cost + tax;

	cout << "Cost: $" << cost << endl;
	cout << "Tax: $" << tax << endl;

	cout << "Total estimafdsfsdfte: $ " << totalCost << endl;
	cout << "This estimate is valid for " << valid << " days" << endl;


	return 1;
}
