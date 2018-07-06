/*
Find i,j,x such that i^2 + j^2 + x^2 = k^2

*/
#include <iostream>
#include <cmath>
using namespace std;

int main(){

  int k;
  cin >> k;
  for(int i=1;i<k;i++)
    for(int j=1;j<k;j++)
      for(int x=1;x<k;x++)
        if((pow(i,2)+pow(j,2)+pow(x,2)) == pow(k,2))
          cout << i << " " << j << " " << x << endl;
  return 0;
}
