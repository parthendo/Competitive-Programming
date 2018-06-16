/*
 * Name: Parth Trehan (markus__)
 */
 //REVISIT!!
#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int BinarySearch(vector<int> arr,int k){

  int low = 0, high = arr.size(), mid = -1;
  while(low<=high){
    mid = low + (high-low)/2;
    if(k*log10(arr[mid]) >= k*log10(arr[mid]))
      high = mid - 1;
    else
      low = mid + 1;
  }
  if(k*log10(arr[mid])<=arr[mid]*log10(k))
    return mid;
  else
    return -1;
}

int compute_pair(vector<int> arri, vector<int> arrj){

  int sumOfPairs = 0, n = arri.size();
  sort(arri.begin(),arri.end());
  sort(arrj.begin(),arrj.end());
  for(int i=0;i<n;i++){
    int pos = BinarySearch(arrj,arri[i]);
    sumOfPairs+=(pos+1);
  }
  return sumOfPairs;
}

int main(){

  int n,m;
  vector<int> arri,arrj;
  cin >> n;
  for(int i=0;i<n;i++){
    int temp; cin>>temp;
    arri.push_back(temp);
  }
  cin >> m;
  for(int i=0;i<m;i++){
    int temp; cin>>temp;
    arrj.push_back(temp);
  }
  cout << compute_pair(arri,arrj);
  return 0;
}
