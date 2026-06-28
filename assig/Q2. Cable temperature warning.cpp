#include <iostream>

using namespace std;

int main() {
    double temp;

    // Prompt user for input
    cout << "Enter the temperature of the electrical cable in degrees Celsius: ";
    cin >> temp;

    // Classification logic using if...else
    if (temp > 70.0) {
        cout << "Cable overheating detected." << endl;
    }
    else {
        cout << "Cable temperature is within safe range." << endl;
    }

    return 0;
}
