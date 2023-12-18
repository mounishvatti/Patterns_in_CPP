#include <iostream>
using namespace std;

/*
Pattern - 18

A A A A 
B B B 
C C 
D

*/

int main()
{
    int n = 4;
    for (int i = n-1; i >= 0; i--)
    {
        char ch = 'A'+n-i-1;
        // characters
        for (int j = 0; j <= i; j++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
    return 0;
}
