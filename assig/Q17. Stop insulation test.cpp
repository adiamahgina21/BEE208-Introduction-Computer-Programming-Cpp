#include <iostream>

using namespace std;

int main() {
    double reading;

    cout << "--- Insulation Resistance Tester (Max 10 Readings) ---" << endl;

    for (int i = 1; i <= 10; ++i) {
        cout << "Reading #" << i << " (M\u2126): ";
        cin >> reading;

        if (reading < 1.0) {
            cout << "Insulation failure detected. Test stopped." << endl;
            break;
        }

        cout << "Insulation reading acceptable." << endl << endl;
    }

    cout << "\nTesting sequence finalized." << endl;
    return 0;
}
