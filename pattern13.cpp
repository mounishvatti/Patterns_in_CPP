#include <iostream>
using namespace std;

/*
Pattern - 13

1 
2 3 
4 5 6 
7 8 9 10 

*/

int main()
{
    int n = 4;
    int num = 1;
    for (int i = 1; i <= n; i++)
    {
        // numbers
        for (int j = 1; j <= i; j++)
        {
            cout << num << " ";
            num+=1;
        }
        cout << endl;
    }
    return 0;
}

