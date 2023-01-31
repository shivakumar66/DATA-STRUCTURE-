#include<stdio.h>
#include<stdlib.>
#define MAX 10
int stack[MAX];
int top=-1;
void insert();
void delet();
void show();
void forw();
void main()
{
	int choice;
	while(1)
	{
	printf("\nright your choice=");
	scanf("%d",choice);
	switch(choice)
	{
		case 1:
		insert();
		break;
		case 2:
		delet();
		break;
		case 3:
		forw();
		break;
		case 4:
		exit(0);
		break;
		default:
		printf("\nwrong choice");
		break;
	}
	}
}
void insert()
{
	
}
