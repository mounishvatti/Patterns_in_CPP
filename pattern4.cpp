#include <iostream>
using namespace std;

/*

Pattern - 4 

1 
2 2 
3 3 3  

*/

int main() 
{
  int n = 3;
    for(int i = 1; i<=n; i++){
      for(int j = 1; j<=i; j++ ){
        cout<<i<<" ";
      }
      cout<<endl;
    }
    return 0;
}