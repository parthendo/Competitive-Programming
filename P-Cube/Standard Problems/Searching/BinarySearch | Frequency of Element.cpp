/*
 *  Problem Statement: Given a sorted array and a key, find the frequency of
 *                     that key.
 *  SC: O(1)
 *  TC: O(log n)
 */
#include <iostream>
#include <vector>
using namespace std;

int lessBS(vector<int> arr, int k){

  int low = 0, high = arr.size(), mid;
  while(low<high){
    mid = low + (high-low)/2;
    if(arr[mid]>=k)
      high = mid-1;
    else
      low = mid+1;
  }
  return mid;
}
int moreBS(vector<int> arr, int k){
  int mid, low = 0, high = arr.size();
  while(low<high){
    mid = low + (high-low)/2;
    if(arr[mid]<=k)
      low = mid+1;
    else
      high = mid-1;
  }
  return mid;
}
int main(){

  int n,k,temp;
  vector<int>arr;
  cin >> n;
  for(int i=0;i<n;i++){
    cin >> temp;
    arr.push_back(temp);
  }
  cin >> k;
  cout<<moreBS(arr,k)<<endl;
  cout<<lessBS(arr,k)<<endl;
  //Index of last occerance - index of first occerance + 1
  cout << (moreBS(arr,k)-1)-(lessBS(arr,k)+1) + 1<<endl;
  return 0;
}
