/*
 * Problem statement: Arithmetic multiplication of two strings
 * Sample Input: "12" x "10" = "120"
 */ 

#include <iostream>
#include <string>
#include <vector>
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

string multiply(string a, string b){
	
	string ans;
	int l1 = a.length(),l2 = b.length();
	reverse(a.begin(),a.end());
	reverse(b.begin(),b.end());
	vector<string> arr;
	for(int i=0;i<l1;i++){
		string temp = "";
		int carry = 0;
		int n = a[i]-'0';
		for(int j=0;j<l2;j++){
			int m = b[i]-'0';
			int t = n*m + carry;
			carry = t/10;
			t = t%10;
			char ch = char(t-'0');
			temp = temp + ch;
		}
		if(carry>0){
			char ch = char(carry-'0');
			temp = temp + ch;
		}
		cout << temp << endl;
		arr.push_back(temp);
	}
	return ans;
}

int main(){
	string a = multiply("94")
	return 0;
}
