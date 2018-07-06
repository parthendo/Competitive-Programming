#include <iostream>
#include <cstring>
using namespace std;

bool isSort(string str){
  int l = str.length();
  for(int i=1;i<l;i++){
    if(str[i-1]>str[i])
      return false;
  }
  return true;
}

int main(){

  char c[] = "abcde";
  int l = strlen(c);
  for(int i=0;i<l;i++){
    for(int j=i+1;j<l;j++){
      string str="";
      for(int k=i;k<=j;k++){
        str = str + c[k];
      }
      if(isSort(str))
        cout << str;
      cout<<endl;
    }
  }
  return 0;
}
