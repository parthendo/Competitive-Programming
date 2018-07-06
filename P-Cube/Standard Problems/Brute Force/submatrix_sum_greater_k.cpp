#include <iostream>
using namespace std;

int main(){

  int n;
  cin >> n;
  int arr[n+5][n+5];
  for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
      cin>>arr[i][j];
  int k_sum;
  cin>>k_sum;
  int count = 0;
  for(int size=1;size<=n;size++){
    for(int i=0;i<n-size+1;i++){
      for(int j=0;j<n-size+1;j++){
        int sum = 0;
        for(int k=i;k<i+size;k++){
          for(int l=j;l<j+size;l++){
            sum+=arr[k][l];
          }
        }
        if(sum>k_sum)
          count++;
      }
    }
  }
  cout << count;
  return 0;
}
