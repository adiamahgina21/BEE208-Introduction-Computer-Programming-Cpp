#include <iostream>

using namespace std;

int main() {
    double voltage;

    cout << "--- Solar Panel Voltage Tracker ---" << endl;
    cout << "Enter initial solar panel voltage (V): ";
    cin >> voltage;

    while (voltage >= 18.0) {
        cout << "Voltage OK. Panel operating normally." << endl << endl;
        cout << "Enter next voltage reading (V): ";
        cin >> voltage;
    }

    cout << "\nSolar panel voltage below operating level." << endl;
    return 0;
}
