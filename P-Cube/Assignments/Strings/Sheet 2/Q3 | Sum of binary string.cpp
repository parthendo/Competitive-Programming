/*
 * Problem statement: Given two binary strings, give the output of their sum
 * Sample Input: a = "100" b = "011"
 * Sample Output: "111"
 * Sample Input: a = "11" b = "11"
 * Sample Output: "110"
 */ 
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string sum(string a, string b){
	
	reverse(a.begin(),a.end());
	reverse(b.begin(),b.end());
	int l1 = a.length();
	int l2 = b.length();
	int carry = 0,A,B;
	string ans = "";
	for(int i=0;i<max(l1,l2);i++){
		if(i<l1)
			A = a[i]-'0';
		if(i<l2)
			B = b[i]-'0';
		int temp = A+B+carry;
		if(temp == 3)
			carry = 1,temp = 1;
		else if(temp == 2)
			carry = 1,temp = 0;
		else
			carry = 0;
		char ch = char(temp+'0');
		ans += ch;
	}
	if(carry > 0)
		ans+="1";
	reverse(ans.begin(),ans.end());
	return ans;
}

int main(){
	
	string a,b;
	cin >> a >> b;
	cout << sum(a,b);
	return 0;
}
