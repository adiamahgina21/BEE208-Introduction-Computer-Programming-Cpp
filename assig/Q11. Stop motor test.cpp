#include <iostream>

using namespace std;

int main() {
    double temp;

    cout << "--- Motor Thermal Monitoring Test ---" << endl;
    cout << "Enter the current temperature reading to monitor the motor." << endl << endl;

    // Read the first initial temperature
    cout << "Enter motor temperature (°C): ";
    cin >> temp;

    // While loop monitors values and runs as long as conditions are safe
    while (temp <= 90.0) {
        cout << "Temperature normal. Monitoring continuing..." << endl << endl;

        // Prompt for the next evaluation metric
        cout << "Enter next motor temperature (°C): ";
        cin >> temp;
    }

    // This statement executes only after breaching the threshold and exiting the loop
    cout << endl << "----------------------------------------" << endl;
    cout << "Motor temperature unsafe. Stop motor test." << endl;
    cout << "----------------------------------------" << endl;

    return 0;
}
