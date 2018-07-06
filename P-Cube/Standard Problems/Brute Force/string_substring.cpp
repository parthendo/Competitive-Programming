/*Substring of string*/
#include <iostream>
#include <cstring>
using namespace std;

int main(){

  char c[] = "abcde";
  int l = strlen(c);
  for(int i=0;i<l;i++){
    for(int j=i+1;j<l;j++){
      for(int k=i;k<j;k++)
        cout<<c[k];
      cout<<endl;
    }
  }
  return 0;
}
