#include <iostream>
using namespace std;

/*
Pattern - 19

D D D D 
C C C 
B B 
A 

*/

int main()
{
    int n = 4;
    for (int i = n-1; i >= 0; i--)
    {
        char ch = 'A'+i;
        // characters
        for (int j = 0; j <= i; j++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
    return 0;
}

