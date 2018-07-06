#include <stdio.h>
#include <string.h>

bool pallindrome(char *s, int b, int e){
	
	if(b>=e)	return true;
	if(s[b] == s[e])
		return pallindrome(s,++b,--e);
	return false;
}

int main(){
	
	char str[] = "";
	if(pallindrome(str,0,strlen(str)-1))
		printf("Yes\n");
	else
		printf("No\n");
	return 0;
}
