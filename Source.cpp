#include <iostream>
using namespace std;

int main() {
    double distance_AB, distance_BC, cargo_weight;
    double fuel_capacity = 300;
    double fuel_consumption = 0;
    double total_fuel_required, fuel_needed_at_B;

    cout << "Enter the distance between point A and point B (in km): ";
    cin >> distance_AB;
    cout << "Enter the distance between point B and point C (in km): ";
    cin >> distance_BC;
    cout << "Enter the cargo weight (in kg): ";
    cin >> cargo_weight;

    if (cargo_weight <= 500)
        fuel_consumption = 1;
    else if (cargo_weight <= 1000)
        fuel_consumption = 4;
    else if (cargo_weight <= 1500)
        fuel_consumption = 7;
    else if (cargo_weight <= 2000)
        fuel_consumption = 9;
    else {
        cout << "The aircraft cannot take off due to exceeding the maximum cargo weight." << endl;
        return 1;
    }

    total_fuel_required = (distance_AB + distance_BC) * fuel_consumption;
    fuel_needed_at_B = total_fuel_required - fuel_capacity;

    if (fuel_needed_at_B > 0)
        cout << "The minimum amount of fuel needed to refuel at point B: " << fuel_needed_at_B << " liters." << endl;
    else
        cout << "No refueling required at point B." << endl;

    return 0;
}
