#include <iostream>

using namespace std;

int main() {
    int choice;
    double inputValue;
    double result;

    // Display the conversion menu
    cout << "--- Measurement Unit Conversion Menu ---" << endl;
    cout << "1. Convert volts to millivolts (V to mV)" << endl;
    cout << "2. Convert amperes to milliamperes (A to mA)" << endl;
    cout << "3. Convert kilowatts to watts (kW to W)" << endl;
    cout << "4. Convert ohms to kilo-ohms (Ohms to kOhms)" << endl;
    cout << "----------------------------------------" << endl;
    cout << "Select one option (1-4): ";
    cin >> choice;

    // Prompt user for the numerical value to convert
    cout << "Enter the value to convert: ";
    cin >> inputValue;

    cout << endl; // Blank line for clean output

    // Perform conversion logic using a switch statement
    switch (choice) {
        case 1:
            result = inputValue * 1000.0;
            cout << inputValue << " V = " << result << " mV" << endl;
            break;
        case 2:
            result = inputValue * 1000.0;
            cout << inputValue << " A = " << result << " mA" << endl;
            break;
        case 3:
            result = inputValue * 1000.0;
            cout << inputValue << " kW = " << result << " W" << endl;
            break;
        case 4:
            result = inputValue / 1000.0;
            cout << inputValue << " Ohms = " << result << " kOhms" << endl;
            break;
        default:
            cout << "Invalid choice! Please select an option from 1 to 4." << endl;
            break;
    }

    return 0;
}
