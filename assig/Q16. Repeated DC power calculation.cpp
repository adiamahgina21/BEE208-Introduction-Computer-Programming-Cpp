#include <iostream>

using namespace std;

int main() {
    double voltage, current, power;
    char choice;

    cout << "--- DC Power Calculator ---" << endl;

    do {
        cout << "\nEnter Voltage (V): ";
        cin >> voltage;
        cout << "Enter Current (A): ";
        cin >> current;

        power = voltage * current;
        cout << "Calculated Power: " << power << " Watts (W)" << endl;

        cout << "Perform another calculation? (Y/N): ";
        cin >> choice;
    } while (choice == 'Y' || choice == 'y');

    cout << "\nProgram terminated." << endl;
    return 0;
}
