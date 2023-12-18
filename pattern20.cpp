#include <iostream>
using namespace std;

/*
Pattern - 20

   A
  ABA
 ABCBA
ABCDCBA

*/

int main()
{
    int n = 4;
    for (int i = 1; i <= n; i++)
    {
        // char ch = 'A';
        //  space
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        // characters
        char ch = 'A';
        int breakpoint = (2 * i - 1) / 2;
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            cout << ch;
            if (k > breakpoint)
            {
                ch--;
            }
            else
                ch++;
        }
        // space
        for (int l = 1; l <= n - i; l++)
        {
            cout << " ";
        }
        cout << endl;
    }
    return 0;
}