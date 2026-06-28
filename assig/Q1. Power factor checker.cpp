#include <iostream>

using namespace std;

int main() {
    double pf;

    // Prompt user for input
    cout << "Enter the power factor of the electrical load: ";
    cin >> pf;

    // Classification logic using if...else if...else
    if (pf < 0.0 || pf > 1.0) {
        cout << "Invalid power factor" << endl;
    }
    else if (pf <= 0.50) {
        cout << "Poor power factor" << endl;
    }
    else if (pf <= 0.80) {
        cout << "Fair power factor" << endl;
    }
    else if (pf <= 0.95) {
        cout << "Good power factor" << endl;
    }
    else {
        cout << "Excelent power factor" << endl;
    }

    return 0;
}
