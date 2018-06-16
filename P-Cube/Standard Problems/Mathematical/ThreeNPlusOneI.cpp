/*
 * Problem Statement: Given a range, find the value for which the snippet prints most numbers
   Snippet{
      input n
      print n
      if n == 1 the stop
      if n is odd then n = 3*n+1
      else
      n = n/2
      go to line 5
    }
 *
 */
#include <iostream>
#include <vector>
using namespace std;
vector<int> arr;
void func(int n){
 while(1){
   arr.push_back(n);
  if(n == 1)
    break;
  if(n%2 != 0)
    n = 3*n+1;
  else
    n = n/2;
  }
 }
int main(){

  int n,m;
  cout << "Enter the range\n";
  cin >> n >> m;
  int mx = -1,mxp = -1;
  for(int i=n;i<=m;i++){
    func(i);
    int l = arr.size();
    //cout<<l<<endl;
    if(mx < l){
      mx = l;
      mxp = i;
    }
    arr.clear();
 }
 cout << "The maximum "<<mx<<" steps are at "<<mxp<<endl;
 return 0;
}
