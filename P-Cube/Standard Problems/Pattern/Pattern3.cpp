/*
Sample Input: 7
Sample Output:
  ABCDEFGFEDCBA
  ABCDEF FEDCBA
  ABCDE   EDCBA
  ABCD     DCBA
  ABC       CBA
  AB         BA
  A           A
*/
#include <iostream>
using namespace std;

void pattern(int n){

  for(int i=0;i<n;i++){

    for(int j=0;j<n;j++){

      if(j<(n-i))
        cout << (char)(65+j);
      else
        cout << " ";
    }
    for(int j=n-2;j>=0;j--){

      if(j<(n-i))
        cout << (char)(65+j);
      else
        cout << " ";
    }
    cout << endl;
  }
}

int main(){

  int n;
  cin >> n;
  pattern(n);
  return 0;
}
