#include <iostream>

using namespace std;

int main() {
    double power;
    double time;
    double energy;
    double total_energy = 0.0;

    cout << "--- Appliance Energy Consumption Calculator ---" << endl;
    cout << "Please enter the power rating and usage duration for 8 appliances." << endl << endl;

    // For loop to gather information and run calculations for exactly 8 appliances
    for (int i = 1; i <= 8; ++i) {
        cout << "==== Appliance #" << i << " ====" << endl;
        cout << "Enter power rating (Watts, W): ";
        cin >> power;
        cout << "Enter usage time (Hours, h): ";
        cin >> time;

        // Calculate individual appliance energy consumption
        energy = power * time;

        // Accumulate into the running total energy sum
        total_energy += energy;
        cout << endl;
    }

    // Display the final combined calculation
    cout << "-----------------------------------------------" << endl;
    cout << "Total energy consumed by all appliances: " << total_energy << " Watt-hours (Wh)" << endl;
    cout << "-----------------------------------------------" << endl;

    return 0;
}
