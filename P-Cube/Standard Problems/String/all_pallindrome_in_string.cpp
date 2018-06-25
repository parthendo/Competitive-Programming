#include <iostream>
#include <string>
using namespace std;

bool pallindrome(string str){
	
	int l = str.length();
	for(int i=0;i<l/2;i++){
		
		if(str[i] != str[l-i-1])
			return false;
	}
	return true;
}

int main(){
	
	string str = "noonmadamno";
	//string str = "soonmadamnoonada";
	int l = str.length();
	for(int i=0;i<l;i++){
		for(int j=i;j<l;j++){
			string temp = "";
			for(int k=i;k<=j;k++){
				temp = temp + str[k];
			}
			if(pallindrome(temp) && temp.length()>2){
				cout << temp << endl;
				i = j;
			}
		}
	}
	return 0;
}
