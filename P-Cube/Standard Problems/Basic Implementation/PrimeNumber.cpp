/*
 * Problem Statement: Check if a number is prime or not
 * TC = O(sqrt(n))
 * SC = O(1)
 */
#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n){

  int l = sqrt(n);
  for(int i=2;i<=l;i++){
    if(n%i == 0)
      return false;
  }
  return true;
}

int main(){

  int n,l;
  cout << "Enter the number\n";
  cin >> n;
  if(n == 1)
    cout << "Neither prime, nor composite\n";
  else if(isPrime(n))
    cout << "The number is prime\n";
  else
    cout << "The number is composite\n";
  return 0;
}
