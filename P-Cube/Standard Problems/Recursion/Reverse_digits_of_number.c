/*
 * Problem Statement: Reverse digits of a number
 */ 
#include <stdio.h>

int reverse(int n,int p){
	
	if(n>0){
		int temp = n%10;
		p = p*10+temp;
		n/=10;
		return reverse(n,p);
	}
	else
		return p; 
}

int main(){
	
	int n;
	scanf("%d",&n);
	printf("%d",reverse(n,0));
	return 0;
}
