/*
 * Name: Parth Trehan (markus__)
 * SC: O(1)
 * TC: O(n^2)
 */
#include <iostream>
#include <set>
using namespace std;

int main(){

  set <int> st;
  set <int> :: iterator it;
  int n,var;
  cin >> n;
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){

      cin>>var;
      st.insert(var);
    }
  }
  for(it = st.begin();it!=st.end();++it){
    cout<<*it<<" ";
  }
  cout<<endl;
  return 0;
}
