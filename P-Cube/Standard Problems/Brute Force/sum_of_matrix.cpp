/*Find sum of a matrix*/
#include <iostream>
using namespace std;

int main(){

  int n,m;
  cin >> n >> m;
  int arr[n+5][m+5];
  for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)
      cin >> arr[i][j];
  int sum = 0;
  for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)
      sum+=arr[i][j];
  cout << sum << endl;
  return 0;
}
