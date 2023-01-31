#include<stdio.h>
#include<stdlib.h>
#define MAX 50
int front=-1,rear=-1;
int queue[MAX];
void insert();
void delet();
void display();
void main()
{
	int choice;
	while(1)
	{
	printf("\n1.to insert element in queue");
	printf("\n2.to delete element from queue");
	printf("\n3.to show queue");
	printf("\n4.exit queue");
	printf("\nenter the you choice");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
		insert();
		break;
		case 2:
		delet();
		break;
		case 3:
		display();
		break;
		case 4:
		exit(0);
		break;
		default:
		printf("\ninvalid choice");
		break;
	}
	}

}
void insert()
{
	int x;
	if(rear==MAX-1)
	{
		printf("\nQueue is full");
	}
	else
	{
		if(front==-1)
		front=0;
		printf("\nenter which element you want add in queue=");
		scanf("%d",&x);
		rear=rear+1;
		queue[rear]=x;
	}
}
void delet()
{
	if(front==-1||front>rear)
	{
		printf("\nQueue is Empty!");
	}
	else
	{
		printf("\nThis element is deleted from the queue=%d",queue[front]);
		front=front+1;
		queue[front];
	}
}
void display()
{
	if(front==-1)
	{
		printf("\nQueue is Empty!");

	}
	else
	{
		for(int i=front;i<=rear;i++)
		{
			printf("\n%d",queue[i]);
		}
	}
}
