/*
 * Problem statement: Such that no binary no. with two consecutive strings occur
 */ 

#include <iostream>
#include <cstring>

using namespace std;

void print(char *s,int n,int k,bool flag){

	if(n == k){
		cout << s << endl;
		return;
	}
	s[n] = '0';
	print(s,n+1,k,true);
	s[n] = '1';
	if(flag)
		print(s,n+1,k,false);
}

int main(){
	
	int k;
	cin >> k;
	char str[k+5];
	memset(str,'\0',sizeof(str));
	print(str,0,k,true);
	return 0;
}
