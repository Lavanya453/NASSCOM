#include<stdio.h>
#include<stdlib.h>

typedef struct
{
	int value;
	struct node *next;
}node;

static node *head, *newnode;

void printlinkedlist( node *p)
{	
	printf("\r\n the values of linked list are:\r\n");
	while(p!=NULL)
	{
		printf("%d\r\n", p->value);
		p=p->next;
	}
}


node *insert_node(node *head_ref, int n)
{
	newnode=(node*)malloc(sizeof(node));
	newnode->value=n;
	newnode->next=head_ref;
	head_ref=newnode;
	return head_ref;
}


int main()
{
	int nodes=0, elements=0;
	printf("enter the number of nodes:");
	scanf("%d",&nodes);
	printf("enter all %d elements: ",nodes);
	for(int i=0;i<nodes;i++)
	{
		scanf("%d",&elements);
		head=insert_node(head,elements);
	}
	
	printlinkedlist(head);
return 0;
}	
