#include<stdio.h>
#include<stdlib.h>

// creating a node

struct node
{
	int value;
	struct node *next;
};

void printlinkedlist(struct node *p)
{
	while(p!=NULL)
	{
		printf("%d\r\n", p->value);
		p=p->next;
	}
}

int main()
{
	// INTIALIZE NODES
	struct node *head;
	struct node *one =NULL;
	struct node *two =NULL;
	struct node *three =NULL;
	struct node *four=NULL;
	struct node *five=NULL;
	
	// ALLOCATE MEM
	one = malloc(sizeof(struct node)); // one is name of instance
	two = malloc(sizeof(struct node));
	three = malloc(sizeof(struct node));
	four = malloc(sizeof(struct node));
	five =malloc(sizeof(struct node));
	
	// assigning values 
	one->value=1;
	two->value=2;
	three->value=3;
	four->value=4;
	five->value=5;
	
	// linking nodes
	
	one->next=two;
	two->next=three;
	three->next=four;
	four->next=five;
	five->next=NULL;
	
	// LINK THE HEAD
	
	head=one;
	
	// function call
	
	printlinkedlist(head);
	
	return 0;
}
