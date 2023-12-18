#include <iostream>
using namespace std;

/*
Pattern - 17

A B C D 
A B C 
A B 
A 

*/

int main()
{
    int n = 4;
    for (int i = n-1; i >= 0; i--)
    {
        // characters
        for (char j = 'A'; j <= 'A'+ i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}