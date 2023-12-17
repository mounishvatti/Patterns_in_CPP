#include <iostream>
using namespace std;

/*
Pattern - 14

A 
A B 
A B C 
A B C D 

*/

int main()
{
    int n = 4;
    int num = 1;
    for (int i = 0; i < n; i++)
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

