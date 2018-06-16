/*
 * Name: Parth Trehan (markus__)
 * SC: O(1)
 * TC: O(sqrt(n))
 */
#include <iostream>
#include <cmath>
using namespace std;

void PrimeFactorization(int n){

  int l = (int)sqrt(n);
  while(n%2 == 0){
    cout<<"2 ";
    n/=2;
  }
  for(int i=3;i<=l;i+=2){
    while(n%i==0){
      cout<<i<<" ";
      n/=i;
    }
  }
  if(n>1)
    cout<<n;
}

int main(){
  int n;
  cin >> n;
  PrimeFactorization(n);
  cout<<endl;
  return 0;
}
