/*
 * Problem statement: Find if a given number is power of 2 or not
 */

#include <stdio.h>
#include <stdlib.h>

int two_power(unsigned long long int n){
	
	int i,l = sizeof(unsigned long long int)*8,count=0;
	printf("%d\n",l);
	for(i=0;i<l;i++){
		
		printf("%d %ull\n",i,n&(1<<i));
		if(n&(1<<i))
			count++;
	}
	printf("-- %d\n",count);
	if(count == 1)
		return 1;
	else
		return 0;
}

int main(){
	
	unsigned long long int n;
	scanf("%ull",&n);
	if(two_power(n))
		printf("True\n");
	else
		printf("False\n");
	return 0;
}
