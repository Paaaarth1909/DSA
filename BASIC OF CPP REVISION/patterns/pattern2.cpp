#include<iostream>
using namespace std;

// WAP to print the following pattern:
// *
// **
// ***
// ****
// *****

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++) { // Loop for each row
        for (int j = 1; j <= i; j++) { // Loop for printing stars in each row
            cout << "*"; // Print star
        }
        cout << endl; // Move to the next line after printing stars in a row
    }

    return 0;
}