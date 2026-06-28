#include <iostream>

using namespace std;

int main() {
    double l1, l2, l3;
    double average;

    cout << "--- Three-Phase Current Average Calculator ---" << endl;
    cout << "Please enter Line 1, Line 2, and Line 3 currents for the 6 sets." << endl << endl;

    // Use a for loop to iterate through exactly 6 sets of readings
    for (int i = 1; i <= 6; ++i) {
        cout << "==== Set " << i << " ====" << endl;
        cout << "Enter Line 1 current (A): ";
        cin >> l1;
        cout << "Enter Line 2 current (A): ";
        cin >> l2;
        cout << "Enter Line 3 current (A): ";
        cin >> l3;

        // Calculate the average of the three phases
        average = (l1 + l2 + l3) / 3.0;

        // Display individual set result immediately
        cout << "Average current for Set " << i << ": " << average << " A" << endl << endl;
    }

    cout << "-----------------------------------------------" << endl;
    cout << "All 6 data sets successfully processed." << endl;

    return 0;
}
