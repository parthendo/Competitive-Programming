#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 1000

int main(){

	int i,l,count = 0;
	char str[MAX],ch;
	scanf("%[^\t]%*c",str);
	printf("%s\n",str);
	scanf("%c",&ch);
	printf("%c\n",ch);
	l = strlen(str);
	printf("%d\n",l);
	for(i=0;i<l;i++)
		if(str[i] == ch)
			count++;
	printf("Frequency of character %c is %d\n",ch,count);
	return 0;
}
