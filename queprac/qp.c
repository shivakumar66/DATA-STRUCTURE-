#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
	struct node *front=0,*rear=0;
void enque(int x)
{
	struct node *newnode;
	newnode=(struct node *)malloc(sizeof(struct node));
	newnode->data=x;
	newnode->next=NULL;
	if(front==NULL && rear==NULL)
	{
		front=rear=newnode;
	}
	else
	{
		rear->next=newnode;
		rear=newnode;
	}
}
void display()
{
	if(front==NULL && rear==NULL)
	{
		printf("\n")
	}
}
void main()
{
	int choice,n;
	while(1)
	{
	printf("\n1.enqueue");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
		printf("\nenter a element");
		scanf("%d",&n);
		enque(n);
	}
	}
}
