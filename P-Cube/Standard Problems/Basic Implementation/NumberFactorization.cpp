/*
 * Problem Statement: Find the factors of a number.
 * TC = O(sqrt(n))
 * SC = O(sqrt(n))
 */
#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

void factorization(int n){

  cout << "Factors --> ";
  vector<int> backward;
  int l = sqrt(n);
  for(int i=1;i<=l;i++){

    if(n%i == 0){
      cout << i << " ";
      //Corner case as in perfect square number,factors will be repeated!
      if(n/i!=i)
        backward.push_back(n/i);
    }
  }
  l = backward.size();
  for(int i=l-1;i>=0;i--)
    cout<<backward[i]<<" ";
}

int main(){

  int n;
  cout << "Enter the number\n";
  cin >> n;
  factorization(n);
  cout<<endl;
  return 0;
}
