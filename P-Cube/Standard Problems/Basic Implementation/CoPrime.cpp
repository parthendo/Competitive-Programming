/*
 * Problem Statement: Check if two numbers are co-prime or not
 */
#include <iostream>
#include <algorithm>
using namespace std;

int main(){

  int n,m;
  cout << "Enter two numbers\n";
  cin >> n >> m;
  if(__gcd(n,m) == 1)
    cout<<n<<" "<<m<<" are co-primes\n";
  else
    cout<<n<<" "<<m<<" are not co-primes\n";
  return 0;
}
