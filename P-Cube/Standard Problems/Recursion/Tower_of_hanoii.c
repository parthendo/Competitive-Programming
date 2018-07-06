#include <stdio.h>
#include <stdlib.h>

int count = 0;

void towerOfHanoii(int n, char from_rod,char to_rod, char aux_rod){
	
	count++;
	if(n == 1){
			printf("Move disk 1 from rod %c to rod %c\n",from_rod,to_rod);
			return;
	}
	towerOfHanoii(n-1,from_rod,aux_rod,to_rod);
	printf("Move disk %d from rod %c to rod %c\n",n,from_rod,to_rod);
	towerOfHanoii(n-1,aux_rod,to_rod,from_rod);
}

int main(){
	
	int n;
	scanf("%d",&n);
	towerOfHanoii(n,'A','B','C');
	printf("%d\n",count);
	return 0;
}
