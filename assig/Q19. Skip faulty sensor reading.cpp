#include <iostream>

using namespace std;

int main() {
    double reading;
    double sum = 0.0;
    int valid_count = 0;

    cout << "--- Sensor Diagnostic Processing Bus (12 Cycles) ---" << endl;

    for (int i = 1; i <= 12; ++i) {
        cout << "Enter reading for sensor #" << i << ": ";
        cin >> reading;

        // Skip structural out of bounds error flag code
        if (reading == 999.0) {
            cout << "Warning: Faulty sensor reading (999) skipped." << endl;
            continue;
        }

        sum += reading;
        valid_count++;
    }

    cout << "----------------------------------------" << endl;
    if (valid_count > 0) {
        double average = sum / valid_count;
        cout << "Processed " << valid_count << " valid sensors." << endl;
        cout << "Average of valid readings: " << average << endl;
    } else {
        cout << "Error: No valid metrics were entered for calculation." << endl;
    }

    return 0;
}
