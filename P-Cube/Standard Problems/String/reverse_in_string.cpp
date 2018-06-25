#include <cstdio>
#include <cstring>
#define MAX 1000
using namespace std;

void reverse(char *s,int begin,int end){
	
	int l = (end-begin)+1;
	for(int i=0;i<(l/2);i++){
		char t = s[begin+i];
		s[begin+i] = s[begin+(l-i-1)];
		s[begin+(l-i-1)] = t;
	}
}

int main(){
	char s[MAX] = "34 121 896 453 abcd";
	int l = strlen(s);
	int idx=0;
	int i =0;
	while(s[i]!=0){
		if(s[i] == ' '){
			reverse(s,idx,i-1);
			idx = i+1;
		}
		i++;
	}
	reverse(s,idx,l-1);
	printf("%s\n",s);
	return 0;
}
