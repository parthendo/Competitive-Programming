/*
 * Name: Parth Trehan (markus__)
 * SC: O(1)
 * TC: O(n)
 * Cases:
 */
#include <iostream>
#include <utility>
#include <vector>
using namespace std;

pair<int,int> compute(vector<int> arr,int sum){

  pair<int,int> answer;
  int temp = 0, posx = 0, posy = 0, l = arr.size();
  while(posy<l){

    if(temp < sum){
      temp+=arr[posy++];
    }
    else if(temp > sum){
      temp-=arr[posx++];
    }
    else if(temp == sum){
      return {posx,posy-1};
    }
  }
  return {-1,-1};
}

int main(){

  int n,sum;
  vector<int> arr;
  cin >> n;
  for(int i=0;i<n;i++){
    int temp;  cin>>temp;
    arr.push_back(temp);
  }
  cin >> sum;
  pair<int,int> answer = compute(arr,sum);
  cout << "Sum found between the indexes " << answer.first<<" "<<answer.second<<endl;
  return 0;
}
