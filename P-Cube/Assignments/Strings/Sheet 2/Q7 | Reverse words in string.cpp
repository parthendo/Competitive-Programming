/*
 * Problem statement: Reverse string word by word
 * Sample Input: "the sky in blue"
 * Sample Output: "blue is sky the"
 */ 

#include <iostream>
#include <string>
#define MAX 10000
using namespace std;

void printreverse(string str){
	str = " " + str;
	str = str + " ";
	int l = str.length();
	int a = -1, b = -1;
	for(int i=l-1;i>=0;i--){
		if(str[i] == ' '){
			if(a<0)
				a = i;
			else{
				b = a;
				a = i;
				for(int j=a+1;j<b;j++)
					cout<<str[j];
				cout<<" ";
			}
		}
	}
}

int main(){
	
	string str;
	getline(cin,str);
	printreverse(str);
	return 0;
}
