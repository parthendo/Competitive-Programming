#include <stdio.h>
#include <stdlib.h>

int lessBST(int arr[],int low,int high,int key){
	
	int mid,temp;
	while(low<high){
		mid = low + (high-low)/2;
		if(arr[mid]<key)
			low = mid+1;
		else{
			temp = mid;
			high = mid-1;
		}
			
	}
	return temp;
}

int moreBST(int arr[],int low,int high,int key){
	int mid,temp;
	while(low<high){
		mid = low + (high-low)/2;
		if(arr[mid]>key)
			high = mid-1;
		else{
			temp = mid;
			low = mid+1;
		}
	}
	return temp;
}

int main(){
	
	int arr[] = {0,1,2,3,5,6,7};
	printf("%d\n",moreBST(arr,0,11,4)); 
	printf("%d\n",lessBST(arr,0,11,4)); 
	return 0;
}
