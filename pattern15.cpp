#include <iostream>
using namespace std;

/*
Pattern - 15

A 
B B 
C C C 
D D D D 

*/

int main()
{
    int n = 4;
    for (int i = 0; i < n; i++)
    {
        char ch = 'A' + i;
        // characters
        for (int j = 0; j <= i; j++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
    return 0;
}

