/*
 * Problem statement: Find if a given number is power of 2 or not
 */

#include <stdio.h>
#include <stdlib.h>

int two_power(long long int n){
	
	int i,l = sizeof(long long int)*8,count=0;
	printf("%d\n",l);
	for(i=0;i<l/2;i++){
		
		printf("%d %lld\n",i,n&(1<<i));
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
	
	long long int n;
	scanf("%lld",&n);
	if(two_power(n))
		printf("True\n");
	else
		printf("False\n");
	return 0;
}
