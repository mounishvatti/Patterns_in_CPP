#include <iostream>
using namespace std;

/*
Pattern - 11

1
0 1
1 0 1
0 1 0 1
1 0 1 0 1

*/

int main() 
{
  int n = 5;
    for(int i = 0; i<n; i++){
      int start = 1;
      if(i%2==0) start =  1;
      else start = 0;
      for (int j=0;j<=i;j++) {
          if((i+j)%2==0) start = 1;
          else start =0;
        cout << start << " ";
      }
      cout<<endl;
    }
    return 0;
}
