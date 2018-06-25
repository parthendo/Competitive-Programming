#include <string>
#include <iostream>
using namespace std;

int main(){
	
	string str = "God is great";
	int l = str.length();
	for(int i=0;i<l;i++){
		
		if(str[i] == ' ' && str[i+1]>='a' && str[i+1]<='z'){
			str[i+1]-=32;
		}
	}
	cout << str << endl;
	return 0;
}
