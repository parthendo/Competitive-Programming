/*
 * Problem statement: In a matrix, a robot moves 'up' and 'right', print the 
 * 					  possible combinations it takes to reach from (0,0) to (n,m)
 */ 
#include <stdio.h>
#include <string.h>

void possiblepaths(char *s,int pos,int i,int j,int n,int m){
	
	if(i==n && j==m){
		
		printf("%s\n",s);
		return ;
	}
	if(i+1<=n){
		s[pos] = 'R';
		possiblepaths(s,pos+1,i+1,j,n,m);
	}
	if(j+1<=m){
		s[pos] = 'U';
		possiblepaths(s,pos+1,i,j+1,n,m);
	}
}

int main(){

	int n,m;
	char s[100];
	memset(s,'\0',sizeof(s));
	scanf("%d%d",&n,&m);
	possiblepaths(s,0,0,0,n,m);
	return 0;
}

