/*
 * Problem statement: Bubble sort
 * TC = O(n^2) 
 * SC = O(1)
 * bubble_sort(array,size,"INC"/"DSC")
 * Remarks: Inplace, stable
 */
#include <stdio.h>
#define MAX 100

void interchange(int* a,int *b){
	int t = *a;
	*a = *b;
	*b = t;
}

void bubble_sort(int arr[],int n,const char *str){
	
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<n-i-1;j++){
			if(str == "INC" && arr[j]>arr[j+1]){
				interchange(&arr[j],&arr[j+1]);
			}
			else if(str == "DSC" && arr[j]<arr[j+1]){
				interchange(&arr[j],&arr[j+1]);
			}
		}
	}
}

int main(){

	int n,i;
	int arr[MAX];
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
	bubble_sort(arr,n,"DSC");
	printf("Array after sorting ->\n");
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
	return 0;
}


