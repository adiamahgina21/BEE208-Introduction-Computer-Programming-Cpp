#include <iostream>

using namespace std;

int main() {
    double voltage, current, resistance;
    char choice;

    cout << "--- Ohm's Law Calculator (Resistance) ---" << endl;

    do {
        cout << "\nEnter Voltage (V): ";
        cin >> voltage;
        cout << "Enter Current (A): ";
        cin >> current;

        if (current == 0.0) {
            cout << "Division by zero error! Current cannot be zero." << endl;
        } else {
            resistance = voltage / current;
            cout << "Calculated Resistance: " << resistance << " Ohms (\u2126)" << endl;
        }

        cout << "Do you want to continue? (Y/N): ";
        cin >> choice;
    } while (choice != 'N' && choice != 'n');

    cout << "\nProgram exited." << endl;
    return 0;
}
