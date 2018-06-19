/*
 * Problem Statement: To see if a number can be broken in a set of two positive
 *                    squares
 * SC = O(1)
 * TC = O(sqrt n . log n)
 */
#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

bool issquare(int num1){

  int low = 1, high = num1, mid,temp;
  while(low<high){
    mid = low + (high-low)/2;
    if(mid*mid<=num1){
      low = mid+1;
      temp = mid;
    }
    else
      high = mid-1;
  }
  temp++;
  if(temp*temp == num1)
    return true;
  return false;
}

int main(){

  int n ;
  cin >> n;
  int l = sqrt(n);
  for(int i=1;i<l;i++){
    int num1 = n - (i*i);
    if(issquare(num1)){
      cout << num1 << " " << i*i << endl;
      exit(1);
    }
  }
  cout << "No such division is possible\n";
  return 0;
}
