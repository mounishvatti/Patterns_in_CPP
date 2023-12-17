#include <iostream>
using namespace std;

/*
Pattern - 12

1      1
12    21
123  321
12344321

*/

int main()
{
    int n = 4;
    for (int i = 1; i <= n; i++)
    {
        // numbers
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        // space
        for (int k = 1; k <= (2 * n - 2 * i); k++)
        {
            cout << " ";
        }
        // numbers
        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }
        cout << endl;
    }
    return 0;
}
