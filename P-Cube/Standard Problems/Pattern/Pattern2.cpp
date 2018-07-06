/*
Sample Input: 4
Sample Output:
R     L     R     E
 A   C A   S O   E
  M N   S E  O K
   A     S    R
*/
#include <iostream>
#include <string>
using namespace std;

void printline(string str,int n){

  int l = str.length();
  int temp = n-1,next;
  int inter = 2*(n-1)-1,sp=0;
  for(int i=0;i<n;i++){

    next = i;
    for(int j=0;j<i;j++)
      cout << " ";
    int t = l/2*temp;
    for(int j=0;j<=t;j++){

      cout << str[next];
      for(int k=0;k<inter;k++)
        cout << " ";
      if(i!=0 && i!=n-1)
        cout << str[intekpr+next+1];
      next+=(2*temp);
      if(i>0){
        for(int k=0;k<sp;k++)
          cout << " ";
        }
      }
      cout << endl;
      if(sp == 0)
        sp++;
      else
        sp+=2;
      inter-=2;
    }
}

int main(){

  string str = "RAMANCLASSESROORKEE";
  int l;
  cin >> l;
  printline(str,l);
  return 0;
}
