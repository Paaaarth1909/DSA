#include<iostream>
using namespace std;
// WAP to print the following pattern:
// 1
// 2 2
// 3 3 3    
// 4 4 4 4
// 5 5 5 5 5

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++) { // Loop for each row
        for (int j = 1; j <= i; j++) { // Loop for printing numbers in each row
            cout << i << " "; // Print number
        }
        cout << endl; // Move to the next line after printing numbers in a row
    }

    return 0;
}