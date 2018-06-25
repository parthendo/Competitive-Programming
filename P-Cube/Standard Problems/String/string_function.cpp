#include <iostream>
#include <string>
#include <cstring>
#define MAX 100

int main(){
	
	char s1[10]="hello ";
	char *s2="world";
	strcat(s1,s2);
	std::cout<<s1;
	return 0;
}
