#include <iostream>
using namespace std;

/*
Pattern - 24

*        *
**      **
***    ***
****  ****
**********
****  ****
***    ***
**      **
*        *

*/

int main()
{
    int n = 5;
    int space = 2*n-2;
    for (int i = 1; i <= n; i++)
    {
        // star
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        //space
        for (int j = 0; j < space; j++)
        {
            cout << " ";
        }
        //star
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        space-=2;
        cout << endl;
    }
    space = 2*n-8;
    for (int i = 1; i <= n; i++)
    {
        // star
        for (int j = 0; j < n-i; j++)
        {
            cout << "*";
        }
        //space
        for (int j = 0; j < space; j++)
        {
            cout << " ";
        }
        //star
        for (int j = 0; j < n- i; j++)
        {
            cout << "*";
        }
        space+=2;
        cout << endl;
    }
    return 0;
}