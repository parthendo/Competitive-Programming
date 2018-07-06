/*
 * Problem statement: In a matrix, find a path from (i,j) to (m,n) such that we only travel on 1's and not 0's
 * Sample Input:	[0100]	i=0,j=1,n=3,m=3
 *   				[0110]
 * 					[0011]
 * 					[0001]
 * Sample Output: Yes, path exists
 * Sample Input:    [1,1,0,0,0,0,0,0,1]	i=0,j=0,n=0,m=8
 * 					[0,1,0,0,0,1,1,1,1]
 * 					[0,1,0,0,0,1,0,0,0]
 * 					[0,1,0,1,1,1,1,1,0]
 * 					[0,1,0,0,0,0,0,1,0]
 * 					[0,1,1,1,1,1,1,1,1]
 * 					[0,0,0,0,1,0,0,0,0]
 * 					[0,0,0,0,1,1,0,0,0]
 * 					[0,0,0,0,0,1,1,0,0]
 * Sample Output: Yes, path exists
 */ 
#include <cstdio>
#define MAX 1000
using namespace std;

int arr[MAX][MAX];

void way(int i,int j,int n,int m,int N,char dir,bool &flag){
	
	if(i == n && j == m){
		flag = true;
		return;
	}
	if(i-1>=0 && arr[i-1][j] == 1 && dir!='U') 
		way(i-1,j,n,m,N,'D',flag);
	if(j+1<N && arr[i][j+1] == 1 && dir!='R')
		way(i,j+1,n,m,N,'L',flag);
	if(i+1<N && arr[i+1][j] == 1 && dir!='D')
		way(i+1,j,n,m,N,'U',flag);
	if(j-1>=0 && arr[i][j-1] == 1 && dir!='L')
		way(i,j-1,n,m,N,'R',flag);
}

int main(){
	
	bool flag = false;
	int N;
	scanf("%d",&N);
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			printf("%d",arr[i][j]);
		}
		printf("\n");
	}
	
	int i,j,n,m;
	scanf("%d%d%d%d",&i,&j,&n,&m);
	way(i,j,n,m,N,' ',flag);
	if(flag)
		printf("Yes, path exists\n");
	else
		printf("No path exists\n");
	return 0;
}
