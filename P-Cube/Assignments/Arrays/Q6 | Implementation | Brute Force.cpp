/*
 * Name: Parth Trehan (markus__)
 * SC: O(1)
 * TC: O(n)
 * Notes: Think of log n algo, some randomized type algorithm
 */
#include <iostream>
#include <vector>
using namespace std;

int compute(vector<int>arr,int n){

  for(int i=0;i<n;i++){
    if(arr[i] == 1)
      return i;
    if(arr[i] != 0 && arr[i] != 1)
      return -2
  }
  return -1;
}

int main(){

  int n;
  vector<int> arr;
  cin >> n;
  for(int i=0;i<n;i++){
    int temp;  cin>>temp;
    arr.push_back(temp);
  }
  cout << compute(arr,n) << endl;
  return 0;
}
