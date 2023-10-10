#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of lines: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        char ch = 'A';
        for (int j = 0; j <= i; j++)
        {
            cout << ch << " ";
            ch++; 
        }
        cout << endl;
    }

    return 0;
}

// output

// A
// A B
// A B C
// A B C D
// A B C D E
// A B C D E F 
// A B C D E F G
// A B C D E F G H
// A B C D E F G H I
// A B C D E F G H I J
