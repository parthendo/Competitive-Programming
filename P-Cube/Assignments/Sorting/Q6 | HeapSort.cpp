/*
 * Problem Statement: Heap Sort
 * SC: O(n)
 * TC: O(nlogn)
 */ 
#include <queue>
#include <cstdio>

using namespace std;

void heap_sort(priority_queue<int,vector<int>,greater<int> > pq){
	
	while(pq.size()>0){
		int tp = pq.top();
		printf("%d ",tp);
		pq.pop();
	}
	printf("\n");
}

int main(){
	int n,i,temp;
	priority_queue<int,vector<int>,greater<int> > pq;
	printf("Enter the size of array\n");
	scanf("%d",&n);
	printf("Enter the elements into array\n");
	for(i=0;i<n;i++){
	
		scanf("%d",&temp);
		pq.push(temp);
	}
	printf("The sorted array is -> ");
	heap_sort(pq);
	return 0;
}
