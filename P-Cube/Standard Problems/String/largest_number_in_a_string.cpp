#include <string>
#include <iostream>
using namespace std;

int compute(string str){
	
	int l = str.length();
	int mx = -1,sum = 0 ;
	for(int i=0;i<l;i++){
		if(str[i] == ' '){
			if(sum>mx)
				mx = sum;
			sum = 0;
		}
		else
		 sum = sum*10 + (str[i]-'0');
	}
	return mx;
}

int main(){
	
	string str = "34 121 0123 567 891";
	str = str + " ";
	cout << compute(str)<<endl;
}
