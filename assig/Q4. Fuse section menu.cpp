#include <iostream>

using namespace std;

int main() {
    int choice;

    // Display the fuse rating menu
    cout << "--- Fuse Rating Menu ---" << endl;
    cout << "1. 5 A Fuse" << endl;
    cout << "2. 10 A Fuse" << endl;
    cout << "3. 13 A Fuse" << endl;
    cout << "4. 20 A Fuse" << endl;
    cout << "5. 32 A Fuse" << endl;
    cout << "------------------------" << endl;
    cout << "Select one option (1-5): ";
    cin >> choice;

    cout << endl; // Blank line for clean output

    // Evaluate user choice using a switch statement
    switch (choice) {
        case 1:
            cout << "Suitable Application: Lighting circuits and low-power appliances (e.g., lamps, fans)." << endl;
            break;
        case 2:
            cout << "Suitable Application: Moderate appliances and small kitchen equipment (e.g., microwaves)." << endl;
            break;
        case 3:
            cout << "Suitable Application: Standard ring main circuits and heavy domestic appliances (e.g., kettles, irons)." << endl;
            break;
        case 4:
            cout << "Suitable Application: Dedicated appliance circuits (e.g., small air conditioners, washing machines)." << endl;
            break;
        case 5:
            cout << "Suitable Application: High-power radial circuits (e.g., electric cookers, showers)." << endl;
            break;
        default:
            cout << "Invalid choice! Please select an option from 1 to 5." << endl;
            break;
    }

    return 0;
}
