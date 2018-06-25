#include <cstring>
#include <iostream>
using namespace std;

void reverse(char *s,int l){
	
	for(int i=0;i<l/2;i++){
		
		char t = s[i];
		s[i] = s[l-i-1];
		s[l-i-1] = t;
	}
}

int main(){
	char s[] = "hellohumour";
	reverse(s,strlen(s));
	cout << s << endl;
}
