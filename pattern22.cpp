#include <iostream>
using namespace std;

/*
Pattern - 22

E 
D E 
C D E 
B C D E 
A B C D E

*/

int main()
{
    int n = 5;
    for (int i = 0; i <= n; i++)
    {
        // characters
        for (char ch = 'A' + n - i; ch < 'A'+ n; ch++)
        {
            cout << ch <<" ";
        }
        cout << endl;
    }
    return 0;
}