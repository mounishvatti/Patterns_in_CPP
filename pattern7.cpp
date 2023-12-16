#include <iostream>
using namespace std;

/*
Pattern - 7 

    *    
   ***   
  *****  
 ******* 
*********

*/

int main() 
{
  int n = 5;
    for(int i = 0; i<n; i++){
      for(int j = 1; j<=n-i-1; j++ ){ // to print the spaces before stars
        cout <<" ";
      }
      for(int k = 1; k<=2*i+1; k++){ // to print the stars
        cout << "*";
      }
      for(int l = 1; l<=n-i-1; l++){ // to print the spaces after stars
        cout <<" ";
      }
      cout<<endl;
    }
    return 0;
}
