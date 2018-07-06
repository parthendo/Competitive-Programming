/*
 * Problem statement: Prime number using recursion
 */ 
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int prime(int n,int k){
	
	if(k>1 && n%k == 0)
		return 0;
	return prime(n,k-1);
}

int main(){
	
	int n;
	scanf("%d",&n);
	int l = sqrt(n);
	if(prime(n,l))
		printf("Yes\n");
	else
		printf("No\n");
	return 0;
}
