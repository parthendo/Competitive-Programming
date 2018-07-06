/*
 * Problem statement: GCD of two numbers
 */ 
#include <stdio.h>

int GCD(int a,int b){
	
	if(b>0)
		return GCD(b,a%b);
	return a;
}

int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	printf("%d\n",GCD(a,b));
	return 0;
}
