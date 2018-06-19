/*
 * Problem Statement: Rails Problem
 */
#include <iostream>
#include <stack>
#include <vector>
using namespace std;

bool rails(vector<int> seq,vector<int> rail){

  stack <int> stk;
  int l = rail.size() ,pos = 0;
  for(int i=0;i<l;i++){

    if(rail[i] == seq[pos])
      pos++;
    else if(stk.top() == seq[pos])
      pos++;
    if(rail[i] != seq[pos])
      stk.push(rail[i]);
  }
  while(pos<l){
    if(stk.top() == seq[pos])
      pos++;
  }
  if(stk.empty())
    return true;
  return false;
}

int main(){

  int n,temp;
  vector<int>rail,seq;
  cin >> n;
  for(int i=0;i<n;i++){
    cin >> temp;
    rail.push_back(temp);
  }
  for(int i=0;i<n;i++){
    cin >> temp;
    seq.push_back(temp);
  }
  cin >> temp;
  if(rails(seq,rail)) cout << "Yes\n";
  else                cout << "No\n";
  return 0;
}
