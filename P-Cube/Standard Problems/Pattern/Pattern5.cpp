/*
  Sample Input:
  n = 7, lines = 4
  Sample Output:
  7
  14      13
  28      27      26      25
  56      55      54      53      52      51      50      49
*/
#include <iostream>
#include <cmath>
using namespace std;

void pattern(int n,int lines){

  int temp = 0;
  for(int i=0;i<lines;i++){
    int p = pow(2,temp++);
    int t = p*n;
    for(int j=0;j<p;j++)
      cout<<t--<<"\t";
    cout<<endl;
  }
}
int main(){

  int n,lines;
  cin >> n >> lines;
  pattern(n,lines);
  return 0;
}
