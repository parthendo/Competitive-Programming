/*
 *  Problem Statement: Given a sorted array and a key, find whether the key
 *                     occurs more than n/2 times.
 *  SC: O(1)
 *  TC: O(log n)
 */
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int binarySearch(vector<int> arr, int low, int high, int key){

  int mid;
  while(low<high){
    mid = low + (high-low)/2;
    if(arr[mid]<key){
      low = mid+1;
    }
    else if(arr[mid]>key)
      high = mid-1;
    else
      return mid;
  }
  return -1;
}
int main(){

  vector<int> arr;
  int n,temp,k;
  cin >> n;
  for(int i=0;i<n;i++){
    cin >> temp;
    arr.push_back(temp);
  }
  k = arr[(int)n/2];
  if(binarySearch(arr,0,floor(n/2),k)!=-1 && binarySearch(arr,floor(n/2)+1,n-1,k)!=-1)
    cout << k << " occurs more than n/2 times\n";
  return 0;

}
