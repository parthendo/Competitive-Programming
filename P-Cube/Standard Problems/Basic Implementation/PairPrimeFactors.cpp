/*
 * Problem Statement: Find the pair of factors of a number.
 * TC = O(sqrt(n))
 * SC = O(sqrt(n))
 */
#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

void factorization(int n){

  vector<int> forward,backward;
  int l = sqrt(n);
  cout << "Factors --> ";
  for(int i=1;i<=l;i++){
    if(n%i == 0)
      cout<<"("<<i<<","<<n/i<<") ";
  }
}

int main(){

  int n;
  cout << "Enter the number\n";
  cin >> n;
  factorization(n);
  cout<<endl;
  return 0;
}
