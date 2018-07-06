/*
Sample Input: 6
Sample Output:
21      20      19      18      17      16
15      14      13      12      11
10      9       8       7
6       5       4
3       2
1
*/
#include <iostream>
using namespace std;

void rev_floyd(int n){

  int temp = (n*(n+1))/2;
  int row = n;
  for(int i=0;i<n;i++){
    for(int j=0;j<=n-i-1;j++){
      cout << temp << "\t";
      temp--;
    }
    cout << endl;
  }
}

int main(){

  int n;
  cin >> n;
  rev_floyd(n);
  return 0;
}
