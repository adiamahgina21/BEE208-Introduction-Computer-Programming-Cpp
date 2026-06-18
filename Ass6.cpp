#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char ch;
    cin >> ch;

    if (isupper(ch))
        cout << "Uppercase letter";
    else
        cout << "Not an uppercase letter";

    return 0;
}
