#include <cstring>
#include <iostream>
using namespace std;

int compute(char* str){
	
	int i =0,mx = -1,count = 0;
	while(str[i]!=0){
		if(str[i]>='0' && str[i]<='9')
			count++;
		else{
			if(count>mx)
				mx = count;
			count = 0;
		}
		i++;
	}
	if(count>mx)
		mx = count;
	return mx;
}

int main(){
	
	char str[100] = "abcd123efg57lmn0012el123456789";
	cout << compute(str)<<endl;
}
