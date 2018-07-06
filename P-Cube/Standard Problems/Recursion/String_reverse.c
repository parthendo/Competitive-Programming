#include <stdio.h>
#include <string.h>

void reverse(char *s, int b, int e){
	
	printf("%d %d\n",b,e);
	if(b>=e)	return;
	char t = s[b];
	s[b] = s[e];
	s[e] = t;
	reverse(s,++b,--e);
}

int main(){
	
	char str[] = "abcdefg";
	reverse(str,0,strlen(str)-1);
	printf("%s\n",str);
	return 0;
}
