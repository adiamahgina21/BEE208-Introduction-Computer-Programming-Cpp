#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    if (a == b && b == c)
        cout << "Equal";
    else
        cout << "Not equal";

    return 0;
}
