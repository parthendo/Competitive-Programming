/*
Find prime numbers in a given range
*/
#include <iostream>
#include <cmath>
using namespace std;

bool prime(int n){

  int l = sqrt(n);
  for(int i=2;i<=l;i++)
    if(n%i == 0)
      return false;
  return true;
}

int main(){

  int n,m;
  cin >> n >> m;
  for(int i=n;i<=m;i++){
    if(prime(i))
      cout << i << " ";
  }
  cout << endl;
  return 0;
}
