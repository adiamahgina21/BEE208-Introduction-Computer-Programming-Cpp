#include <iostream>

using namespace std;

int main() {
    double power;
    double total_load = 0.0;

    cout << "--- Sub-Station Load Demand Evaluation (Max 20 Appliances) ---" << endl;

    for (int i = 1; i <= 20; ++i) {
        cout << "Enter wattage for appliance #" << i << " (W): ";
        cin >> power;

        total_load += power;

        if (total_load > 5000.0) {
            cout << "Maximum load exceeded. Stop adding appliances." << endl;
            break;
        }
    }

    cout << "----------------------------------------" << endl;
    cout << "Final total electrical load: " << total_load << " W" << endl;

    return 0;
}
