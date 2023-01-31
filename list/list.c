#include<stdio.h>
#include<stdlib.h>
//structure to creating the node of data and next link
struct node
{
	int data;
	struct node *next;
};
	struct node *list;
void insert_beg(int x);
void insert_end(int ele);
void insert_after(int sel,int ele);
void insert_before(int sel,int ele);
void delete_beg();
void delete_last();
void delete_sel(int sel);
void travers_frwd();
void main()
{
	list=(struct node *)malloc(sizeof(struct node));
	int choice;
	while(1)
	{
	printf("\n1.insert at begining : ");
	printf("\n2.insert at end : ");
	printf("\n3.insert at after ele : ");
	printf("\n4.insert at before ele : ");
	printf("\n5.delete at begining : ");
	printf("\n6.delete at end ele : ");
	printf("\n7.delete at selected position : ");
	printf("\n8.linked to the list : ");
	printf("\n9.invalid choice");
	printf("\n\nPLEASE CHOICE OPERATION : ");
	scanf("%d",&choice);
	switch(choice)
	{
		int num,endnum,sel,ele,sel1,ele1,no;
		case 1:
		printf("\nenter at starting  element : ");
		scanf("%d",&num)
		insert_beg(num);
		break;
		case 2:
		printf("\nenter at end element : ");
		scanf("%d",&endnum);
 		insert_end(endnum);
		break;
		case 3:
		printf("\nafter a select position and no:");
		scanf("%d %d",&sel,&ele);
 		insert_after(sel,ele);
		break;
		case 4:
		printf("\nbefore a select position and no:");
		scanf("%d %d",&sel1,&ele1);
 		insert_before(sel1,ele1);
		break;
		case 5:
 		delete_beg();
		break;
		case 6:
 		delete_last();
		break;
		case 7:
		printf("\nselect the position:");
		scanf("%d",&no)
		delete_sel(no);
		break;
		case 8:
 		travers_frwd();
		break;
		case 9:
		exit(0);
		break;
		default:
		printf("\ninavlid choice");
		break;

	}
	}
}
void insert_beg(int num)
{
	struct node temp*;
	temp=(struct node *)malloc(sizeof(struct node));

	if(list!=NULL)
	{
		temp->data=num;
		temp->next=NULL;
		list=temp;
	}
	else
	{
		temp->data=num;
		temp->next=list;
		list=temp;
	}
}
void insert_end(int endnum)
{
	struct node *curr;
	struct node *temp;
	temp=(struct node *)malloc(sizeof(struct node));
	temp->data=endnum;
	temp->next=NULL;
	if(list==NULL)
	{
		list=temp;
	}
	else
	{
		curr=list;
		while(curr->next!=NULL)
		{
			curr=curr->next;
			cur->next=temp;
		}
	}
}
void insert_after(int sel,int ele)
{
	struct node *curr;
	curr=list;
	struct node *temp;
	
}
