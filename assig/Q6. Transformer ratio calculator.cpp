#include <iostream>

using namespace std;

int main() {
    int choice;

    // Variables for calculations
    double primaryTurns, secondaryTurns;
    double primaryVoltage, secondaryVoltage;
    double turnsRatio;

    // Display the menu
    cout << "--- Transformer Calculation Menu ---" << endl;
    cout << "1. Calculate turns ratio" << endl;
    cout << "2. Calculate secondary voltage" << endl;
    cout << "3. Calculate primary voltage" << endl;
    cout << "------------------------------------" << endl;
    cout << "Select one option (1-3): ";
    cin >> choice;

    cout << endl; // Blank line for clean formatting

    // execution based on user selection
    switch (choice) {
        case 1:
            cout << "Enter Primary Turns: ";
            cin >> primaryTurns;
            cout << "Enter Secondary Turns: ";
            cin >> secondaryTurns;

            // Basic division by zero check
            if (secondaryTurns == 0) {
                cout << "Error: Secondary turns cannot be zero." << endl;
            } else {
                turnsRatio = primaryTurns / secondaryTurns;
                cout << "Turns Ratio = " << turnsRatio << endl;
            }
            break;

        case 2:
            cout << "Enter Primary Voltage (V): ";
            cin >> primaryVoltage;
            cout << "Enter Secondary Turns: ";
            cin >> secondaryTurns;
            cout << "Enter Primary Turns: ";
            cin >> primaryTurns;

            if (primaryTurns == 0) {
                cout << "Error: Primary turns cannot be zero." << endl;
            } else {
                secondaryVoltage = (primaryVoltage * secondaryTurns) / primaryTurns;
                cout << "Secondary Voltage = " << secondaryVoltage << " V" << endl;
            }
            break;

        case 3:
            cout << "Enter Secondary Voltage (V): ";
            cin >> secondaryVoltage;
            cout << "Enter Primary Turns: ";
            cin >> primaryTurns;
            cout << "Enter Secondary Turns: ";
            cin >> secondaryTurns;

            if (secondaryTurns == 0) {
                cout << "Error: Secondary turns cannot be zero." << endl;
            } else {
                primaryVoltage = (secondaryVoltage * primaryTurns) / secondaryTurns;
                cout << "Primary Voltage = " << primaryVoltage << " V" << endl;
            }
            break;

        default:
            cout << "Invalid choice! Please select an option from 1 to 3." << endl;
            break;
    }

    return 0;
}
