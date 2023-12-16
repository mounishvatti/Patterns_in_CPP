#include <iostream>
using namespace std;

/*
Pattern - 10

*  
** 
***
**
* 

*/

int main() 
{
  int n = 3;
    for(int i = 0; i<n; i++){
      for(int j = 1; j<=i+1; j++){
        cout << "*";
      }
      for(int k = 1; k<=n-i-1; k++){
        cout <<" ";
      }
      cout<<endl;
    }
    for(int i = n; i>0; i--){
      for(int j = 1; j<=i-1; j++){
        cout << "*";
      }
      for(int k = 1; k<=n-i; k++){
        cout <<" ";
      }
      cout<<endl;
    }
    return 0;
}
