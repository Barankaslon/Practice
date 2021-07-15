#include<iostream>
#include<iomanip>

using namespace std;

int main() {
    double meal_cost{};
    int tip_percent{};
    int tax_percent{};

    cin >> meal_cost;
    cin>> tip_percent;
    cin>> tax_percent;

    double tip = (meal_cost / 100) * tip_percent;
    cout << tip << endl;
    double tax = (meal_cost / 100) * tax_percent;
    cout << fixed << setprecision(2) << tax << endl;
    int total_cost = meal_cost + tip + tax;

    cout << round(total_cost);

    return 0;
}