/*
 * Problem statement: Arithmetic multiplication of two strings
 * Sample Input: "12" x "10" = "120"
 */ 

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string add(string a,string b){
	
	reverse(a.begin(),a.end());
	reverse(b.begin(),b.end());
	int l1 = a.length(),l2 = b.length();
	int carry = 0,sum = 0;
	string ans = "";
	for(int i=0;i<max(l1,l2);i++){
		
		int A = 0,B = 0;
		if(i<l1)
			A = a[i]-'0';
		if(i<l2)
			B = b[i]-'0';
		sum = A+B+carry;
		carry = sum/10;
		sum = sum%10;
		char ch = char(sum + int('0'));
		ans = ans + ch;
	}
	if(carry == 1)
		ans = ans + "1";
	reverse(ans.begin(),ans.end());
	return ans;
}

string multiply(string a,string b){
	
	int l = a.length();
	
}

int main(){
	string a = add("94","1");
	return 0;
}
