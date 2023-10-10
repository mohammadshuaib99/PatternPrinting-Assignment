#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        // Print spaces for the left alignment
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }

        // Print asterisks
        for (int j = 1; j <= n; j++)
        {
            cout << "*";
        }

        cout << endl; // Move to the next line after each row
    }

    return 0;
}

// Enter the value of n: 4
//    ****
//   ****
//  ****
// ****