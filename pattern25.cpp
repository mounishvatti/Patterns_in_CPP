#include <iostream>
using namespace std;

/*
Pattern - 25

****
*  *
*  *
****

*/

int main()
{
    int n = 4;
    for (int i = 0; i < n; i++)
    {
        // star
        for (int j = 0; j < n; j++)
        {
            if(i==0 || j==0 || i==n-1 || j==n-1){
                cout << "*";
            }
            else cout<< " ";
        }
        cout << endl;
    }
    return 0;
}