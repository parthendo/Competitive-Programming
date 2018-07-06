/*
Number of submatrices in matrices
*/
#include <iostream>
using namespace std;

int main(){

  int n,p=0;
  cin >> n;
  int arr[n+5][n+5];
  for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
      arr[i][j] = p++;
  int count = 0;
  for(int size=1;size<=n;size++){
    for(int i=0;i<n-size+1;i++){
      for(int j=0;j<n-size+1;j++){
          count++;
      }
    }
  }
  cout << count;
  return 0;
}
