/*
 * Problem Statement: Use STL stack to implement balanced paranthesis problem
 */
#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isBalanced(string str){

  stack <char> stk;
  int l = str.length();
  for(int i=0;i<l;i++){
    if(str[i] == '(')
      stk.push(str[i]);
    else if(str[i] == ')'){
      if(stk.empty())
        return false;
      stk.pop();
    }
  }
  return stk.empty();
}
int main(){

  string str;
  cout << "Enter the string of paranthesis\n";
  cin >> str;
  if(isBalanced(str))
    cout << "Paranthesis in "<<str<<" are balanced"<<endl;
  else
    cout << "Paranthesis in "<<str<<" are not balanced"<<endl;
  return 0;
}
