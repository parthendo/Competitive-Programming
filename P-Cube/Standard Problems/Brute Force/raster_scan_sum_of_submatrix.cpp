/*
Implement raster scan on a matrix. Sum of each sub-matrix
*/
#include <iostream>
using namespace std;

int main(){

  int n,m;
  cin >> n;
  int arr[n+5][m+5];
  for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
      cin>>arr[i][j];

  int sum = 0;
  for(int size=1;size<=n;size++){
    for(int i=0;i<n-size+1;i++){
      for(int j=0;j<n-size+1;j++){
        sum = 0;
        for(int k=i;k<i+size;k++){
          for(int l=j;l<j+size;l++){
            sum+=arr[k][l];
          }
        }
        cout << sum << ",";
      }
    }
  }
  return 0;
}
