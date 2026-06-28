#include <iostream>

using namespace std;

int main() {
    double resistance;

    cout << "--- Earth Resistance Testing Unit ---" << endl;
    cout << "Enter initial earth resistance reading (Ohms): ";
    cin >> resistance;

    while (resistance <= 5.0) {
        cout << "Earth resistance acceptable." << endl << endl;
        cout << "Enter next resistance reading (Ohms): ";
        cin >> resistance;
    }

    cout << "\nEarth resistance too high. Improve earthing system." << endl;
    return 0;
}
