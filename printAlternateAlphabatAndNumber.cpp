#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of lines: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 1)
        {
            char ch = 'A';
            for (int j = 1; j <= i; j++)
            {
                cout << ch << " ";
                ch++;
            }
        }
        else
        {
            for (int j = 1; j <= i; j++)
            {
                cout << j << " ";
            }
        }
        cout << endl;
    }

    return 0;
}


// output
// A
// 1 2
// A B C
// 1 2 3 4
// A B C D E