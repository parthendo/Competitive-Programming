/*
Sample Input: 7
Sample Output:
ABCDEFGFEDCBA
 BCDEFGFEDCB
  CDEFGFEDC
   DEFGFED
    EFGFE
     FGF
      G
*/
#include <iostream>
using namespace std;

int main(){

  int n;
  cin >> n;
  for(int i=0;i<n;i++){
    for(int j=0;j<i;j++)
      cout << " ";
    for(int j=i;j<n;j++)
      cout << (char)(j+65);
    for(int j=n-2;j>=i;j--)
      cout << (char)(j+65);
    cout << endl;
  }
  return 0;
}
