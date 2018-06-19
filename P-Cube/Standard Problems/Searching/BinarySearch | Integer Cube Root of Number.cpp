/*
 *  Problem Statement: Given a sorted array and a key, find whether the key
 *                     occurs more than n/2 times.
 *  SC: O(1)
 *  TC: O(sqrt n . log n)
 */
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int integercuberoot(int n){

  int mid,temp;
  int low = 1, high = n;
  while(low<high){
    mid = low + (high-low)/2;
    if(mid*mid*mid <= n){
      low = mid + 1;
      temp = mid;
    }
    else{
      high = mid - 1;
    }
  }
  return temp;
}
int main(){

  int n;
  cin >> n;
  cout << integercuberoot(n) << endl;
  return 0;
}
