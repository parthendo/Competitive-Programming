/*
 * Name: Parth Trehan (markus__)
 * SC: O(1)
 * TC: O(nlogn)
 * Notes: Think of a linear algorithm
 */
#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int compute(vector<int> arr,int k){

  int i=0,j=0,l = arr.size(),count = 0;
  sort(arr.begin(),arr.end());
  while(j<l){
    int temp = arr[j] - arr[i];
    if(temp<k)
      j++;
    else if(temp>k)
      i++;
    else if(temp == k)
      count++,i++,j++;
  }
  return k;
}

int main(){

  vector<int> arr;
  int n,k,temp;
  cin >> n;
  for(int i=0;i<n;i++){
    cin>>temp;  arr.push_back(temp);
  }
  cin >> k;
  cout << compute(arr,k);
  return 0;
}
