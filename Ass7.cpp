#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;

    if (str.find('a') != string::npos)
        cout << "Contains 'a'";
    else
        cout << "Does not contain 'a'";

    return 0;
}
