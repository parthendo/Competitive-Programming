/*
Sample Input: n = 4
    1   2  3  4
    5   6  7  8
    9  10 11 12
    13 14 15 16
Sample Output:
  13
  4
  9 14
  3 8
  5 10 15
  2 7 12
  1 6 11 16
*/
#include <iostream>
#include <vector>
using namespace std;

void printline(int x,int y,int n,int m, int var,vector<int> arr[]){

  int i,j;
  if(var)
    for(i=x,j=y;i<m && j<m;j++,i++)
      cout << arr[i][j] << " ";
  else
    for(i=x,j=y;i>=0 && j>=0;i--,j--)
      cout << arr[i][j] << " ";
  cout << endl;
}

int main(){

  int pi = 1,n;
  cin >> n;
  vector<int> arr[n];
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      arr[i].push_back(pi++);
    }
  }
  int flag = 1;
  int x = n-1,y = 0,p = 0, q = 0;
  for(int i=0;i<n;i++){
    flag^=1;
    printline(x,y,n,n,flag,arr);
    if(p>=0)
      p = -1*(p+1);
    else
      p = p*-1;
    if(q<=0)
      q = q*-1;
    else
      q = q+2;
    cout << "*" << p << " " << q << endl;
    x+=p;
    y+=q;
  }
  for(int i=1;i<n;i++){
  }
  return 0;
}
