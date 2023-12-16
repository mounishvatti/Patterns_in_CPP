#include <iostream>
using namespace std;

/*
Pattern - 2 

* 
* * 
* * * 
* * * * 

*/

int main() 
{
  int n = 5, i, j;
    for(int i =0; i<n; i++){
      for(int j = 0; j<i+1; j++ ){
        cout<<"* ";
      }
      cout<<endl;
    }
    return 0;
}