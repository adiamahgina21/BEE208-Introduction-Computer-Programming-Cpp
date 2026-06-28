#include <iostream>

using namespace std;

int main() {
    double total_load = 0.0;
    double wattage;

    cout << "--- Lighting Load Calculator ---" << endl;
    cout << "Please enter the wattage for each of the 12 lighting points." << endl << endl;

    // Use a for loop to gather input for exactly 12 lighting points
    for (int i = 1; i <= 12; ++i) {
        cout << "Enter wattage for lighting point #" << i << " (W): ";
        cin >> wattage;

        // Add current wattage to the total load
        total_load += wattage;
    }

    cout << "--------------------------------" << endl;
    // Display the accumulated result
    cout << "Total lighting load: " << total_load << " Watts (W)" << endl;

    return 0;
}
