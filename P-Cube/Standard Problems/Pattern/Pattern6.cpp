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

void printline(int x,int y,int n,int m, vector<int> arr[]){

  int i,j;
  for(i=x,j=y;i<m && j<m;j++,i++)
    cout << arr[i][j] << " ";
  cout << endl;
}

int main(){

  int p = 1,n;
  cin >> n;
  vector<int> arr[n];
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      arr[i].push_back(p++);
    }
  }
  for(int i=n-1;i>=0;i--){
    printline(i,0,n,n,arr);
    if(i!=0)
      printline(0,i,n,n,arr);
  }
  return 0;
}
