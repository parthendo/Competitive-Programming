#include <stdio.h>
#include <stdlib.h>

typedef struct node{
	
	int val;
	struct node *pre,*next;
}node;

void reverse(node *B,node *E){
	
	while(B!=E){
		
		int t = B->val;
		B->val = E->val;
		E->val = t;
		B=B->next;
		E=E->pre;
	}
}

void print(node *B,node *E){
	
	while(B!=NULL){
		
		printf("%d ",B->val);
		B = B->next;
	}
	printf("\n");
}

int main(){
	
	int n;
	node *B = NULL,*E = NULL;
	while(1){
		
		scanf("%d",&n);
		if(n == -1)
			break;
		node *temp;
		temp = (node*)malloc(sizeof(node));
		temp->val = n;
		temp->pre = NULL;
		temp->next = NULL;
		if(B == NULL){
			
			B = temp;
			E = temp;
		}
		else{
	
			temp->pre = E;
			E->next = temp;
			E = temp;
		}
	}
	print(B,E);
	reverse(B,E);
	print(B,E);
	return 0;
}
