#include <iostream>

using namespace std;

int main() {
    int result;
    int passed_count = 0;
    int failed_count = 0;

    cout << "--- Laboratory Component Test Counter ---" << endl;
    cout << "Enter 1 for Pass or 0 for Fail for each of the 15 components." << endl << endl;

    // For loop to process exactly 15 component tests
    for (int i = 1; i <= 15; ++i) {
        cout << "Component #" << i << " result (1 or 0): ";
        cin >> result;

        // Nested if...else statement to validate and sort outcomes
        if (result == 1) {
            passed_count++;
        }
        else {
            failed_count++;
        }
    }

    // Displaying test summaries
    cout << "\n----------------------------------------" << endl;
    cout << "Testing Session Summary:" << endl;
    cout << "Total Passed Components : " << passed_count << endl;
    cout << "Total Failed Components : " << failed_count << endl;
    cout << "----------------------------------------" << endl;

    return 0;
}
