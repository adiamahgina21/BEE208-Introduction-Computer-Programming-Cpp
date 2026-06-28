#include <iostream>

using namespace std;

int main() {
    double rated_current;
    double starting_current;

    // Prompt user for rated current
    cout << "Enter the rated current of the motor (A): ";
    cin >> rated_current;

    // Prompt user for starting current
    cout << "Enter the starting current of the motor (A): ";
    cin >> starting_current;

    // Classification logic using if...else
    if (starting_current > (rated_current * 3.0)) {
        cout << "High starting current. Use proper motor starter." << endl;
    }
    else {
        cout << "Starting current is acceptable." << endl;
    }

    return 0;
}
