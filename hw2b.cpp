#include <stdio.h>
#include <stdlib.h>

struct Node
{
	int data;
	struct Node *next;
};

struct Node *pStart = NULL;
struct Node *pEnd = NULL;

void addrear(int val)
{
	struct Node *Current;
	Current=(struct Node*)malloc(sizeof(struct Node));
	Current->data=val;
	Current->next=NULL;
	
	if(pStart==NULL)
		pStart=pEnd=Current;
	else
	{
		pEnd->next=Current;
		pEnd=Current;
		}	
}

void printlist(struct Node *Current)
{
	Current=pStart;
	while(Current !=NULL)
	{
		printf("%d\n", Current->data);
		Current=Current->next;
	}
}

int main(void)
{
	int i;
	for (i=1; i<=5; i++)
	addrear(i);
	printlist(pStart);
	return 0;
}
