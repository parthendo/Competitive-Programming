/*
Find transpose of a square matrix
Sample Input:
3 3
1 2 3
4 5 6
7 8 9
Sample Output:
1 4 7
2 5 8
3 6 9
*/
#include <iostream>
using namespace std;

int main(){

  int n,m;
  cin >> n >> m;
  int arr[n+5][m+5];
  for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)
      cin >> arr[i][j];
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(i<j){
          int t = arr[i][j];
          arr[i][j] = arr[j][i];
          arr[j][i] = t;
      }
    }
  }
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++)
      cout << arr[i][j];
    cout << endl;
  }
  return 0;
}
