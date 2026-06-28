#include <iostream>

using namespace std;

int main() {
    double power;
    double total_valid_power = 0.0;

    cout << "--- Power Monitor Telemetry System (10 Readings) ---" << endl;

    for (int i = 1; i <= 10; ++i) {
        cout << "Enter reading #" << i << " (W): ";
        cin >> power;

        if (power < 0.0) {
            cout << "Invalid reading skipped." << endl << endl;
            continue;
        }

        total_valid_power += power;
    }

    cout << "----------------------------------------" << endl;
    cout << "Total of valid power readings: " << total_valid_power << " W" << endl;

    return 0;
}
