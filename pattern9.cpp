#include <iostream>
using namespace std;

/*
Pattern - 9

  *  
 *** 
*****
*****
 *** 
  *

*/

int main() 
{
  int n = 3;
    for(int i = 0; i<n; i++){
      for(int j = 1; j<=n-i-1; j++ ){   
        cout <<" ";
      }
      for(int k = 1; k<=2*i+1; k++){
        cout << "*";
      }
      for(int l = 1; l<=n-i-1; l++){
        cout <<" ";
      }
      cout<<endl;
    }
    for(int i = n; i>0; i--){
      for(int j = 1; j<=n-i; j++ ){   
        cout <<" ";
      }
      for(int k = 1; k<=2*i-1; k++){
        cout << "*";
      }
      for(int l = 1; l<=n-i; l++){
        cout <<" ";
      }
      cout<<endl;
    }
    return 0;
}
