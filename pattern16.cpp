#include <iostream>
using namespace std;

/*
Pattern - 16

A 
B C 
D E F 
G H I J  

*/

int main()
{
    int n = 4;
    char ch = 'A';
    for (int i = 0; i < n; i++)
    {
        // characters
        for (char j = 'A'; j <= 'A'+i; j++)
        {
            cout << ch << " ";
            ch+=1;
        }
        cout << endl;
    }
    return 0;
}

