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
	
	//string str = "soonmadamnight";
	string str = "soonmadamnoonada";
	int l = str.length();
	int mx = -1;
	string mxstr;
	for(int i=0;i<l;i++){
		for(int j=i;j<l;j++){
			string temp = "";
			for(int k=i;k<=j;k++){
				temp = temp + str[k];
			}
			int len = temp.length();
			if(pallindrome(temp) && len>2){
				if(mx<len)
					mx = len,mxstr=temp;
				i = j;
			}
		}
	}
	cout << mxstr << endl;
	return 0;
}
