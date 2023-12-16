#include <iostream>
using namespace std;

/*

Pattern - 3 

1 
1 2 
1 2 3  

*/

int main() 
{
  int n = 3;
    for(int i = 1; i<=n; i++){
      for(int j = 1; j<=i; j++ ){
        cout<<j<<" ";
      }
      cout<<endl;
    }
    return 0;
}