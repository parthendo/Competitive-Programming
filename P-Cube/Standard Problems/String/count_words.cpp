#include <iostream>
#include <string>
using namespace std;

int main(){

	int count = 0;
	string str;
	getline(cin,str);
	str = " "+str;
	int l = str.length();
	for(int i=0;i<l-1;i++){
		
		if(str[i] == ' ' && ((str[i+1]>='A' && str[i+1]<='Z') || (str[i+1]>='a' && str[i+1]<='z'))){
			count++;
		}
	}
	cout << count << endl;
	return 0;
}
