#include <iostream>
#include <string>

using namespace std;

int main() {
    string code;
    int attempts = 0;
    bool access_granted = false;

    cout << "--- Laboratory Access Portal ---" << endl;

    while (attempts < 3 && !access_granted) {
        attempts++;
        cout << "Attempt " << attempts << "/3 - Enter access code: ";
        cin >> code;

        if (code == "BEE208") {
            access_granted = true;
        }
    }

    cout << "--------------------------------" << endl;
    if (access_granted) {
        cout << "Access granted." << endl;
    } else {
        cout << "Access denied. Maximum attempts reached." << endl;
    }

    return 0;
}
