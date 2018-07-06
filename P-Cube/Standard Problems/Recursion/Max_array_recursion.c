/*
 * Problem statement: Find maximum of an array using recursion
 */ 
#include <stdio.h>

int max(int arr[],int n,int mx){
	
	if(n>0){
		if(mx<arr[n])
			mx = arr[n];
		return max(arr,n-1,mx);
	}
	else
		return mx;
}

int main(){
	
	int n = 5;
	int arr[] = {1,44,26,84,13};
	printf("%d",max(arr,n-1,-1));
	return 0;
}
