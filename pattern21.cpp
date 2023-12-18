#include <iostream>
using namespace std;

/*
Pattern - 21

E 
E D 
E D C 
E D C B 
E D C B A 

*/

int main()
{
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        // characters
        char ch = 'A'+n-1;
        for (int j = 0; j <= i; j++)
        {
            cout << ch <<" ";
            ch--;
        }
        cout << endl;
    }
    return 0;
}