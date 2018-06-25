#include <string>
#include <iostream>

using namespace std;

int main(){
	
	string str = "God is great";
	int l = str.length();
	for(int i=0;i<l;i++){
		
		if(str[i]>='a' && str[i]<='z')
			str[i]-=32;
	}
	cout<<str;
	cout<<endl;
	return 0;
}
