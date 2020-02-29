#include <stdio.h>
#include <stdlib.h>

struct Node
{
	int data;
	struct Node *next;
};

struct Node *pStart = NULL;
struct Node *pEnd = NULL;

void addfront(int val)
{
	struct Node *Current; 
	Current=(struct Node*)malloc(sizeof(struct Node));
	Current->data=val;
	Current->next=NULL;
	
	if(pStart==NULL)
		pStart=pEnd=Current;
	else
	{	
		Current->next=pStart;
		pStart=Current;
			
	}	
}

void delete(int val)
{
	struct Node *p;
	struct Node *q = NULL;
	
	
	p=pStart;
	while( p != NULL && p->data != val )
		q = p, p = p->next;
	if( p == NULL) return;
	
	if( q != NULL ) // 처음이 아닌 경우 
		q->next = p->next;
	else // 처음인경우 
		pStart = p->next;
	free( p); 
	
}

void printlist(struct Node *Current)
{
	
	while(Current !=NULL)
	{
		printf("%d\n", Current->data);
		Current = Current->next;
		
	}
}

int main(void)
{
	int i;
	for (i=1; i<=20; i++)
		addfront(i);
	delete(2);
	delete(5);	
	
	printlist(pStart);
	return 0;
}


