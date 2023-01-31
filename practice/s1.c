#include<stdio.h>
#include<stdlib.h>
struct node 
{
	int data;
	struct node *next;
};
	struct node *list=NULL;
//its for the insert element in singly link list
void insert(int x)
{
	struct node *curr;
	curr=(struct node*)malloc(sizeof(struct node));
	if(curr==NULL)
	{
		curr->data=x;
		curr->next=NULL;
		list=curr;
	}
	else
	{
		curr->data=x;
		curr->next=list;
		list=curr;
	}
}

//its for the insert at the end
void insert_end(int num)
{
		struct node *curr;
		struct node *temp;
		temp=(struct node *)malloc(sizeof(struct node));
		temp->data=num;
		temp->next=NULL;
		if(list==NULL)
		{
			list=temp;
		}
		else
		{
			curr=list;
			while(curr->next!=NULL)
			curr=curr->next;
			curr->next=temp;
		}
}

//its for the delete element from first of link
int delete_s()
{
		int x=-1;
		struct node *temp;
		if(list!=NULL)
		{
			temp=list;
			x=temp->data;
			list=temp->next;
			free(temp);
		}
		else
		{
			printf("\nits empty");
			return x;
		}
}
//its for the delete element at last in list
int delete_end()
{
	int x=-1;
	struct node *temp;
	struct node *curr;
	if(list!=NULL)
	{
		if(list->next==NULL)
		{
			temp=list;
			x=temp->data;
			list=NULL;
			free(temp);
		}
		else
		{
			curr=list;
			while(curr->next->next!=NULL)
			curr=curr->next;
			temp=curr->next;
			x=temp->data;
			curr->next=NULL;
			free(temp);
		}
	}
	else
	{
		printf("\nits empty!");
		return x;
	}
}
void show()
{
	struct node *temp;
	temp=(struct node *)malloc(sizeof(struct node));
	temp=list;
	while(temp!=NULL)
	{
		if(temp->data!=0)
		{
			printf("%d ",temp->data);
		}
			temp=temp->next;
	}
}
//its main function
void main()
{
	int choice,n,num;
	while(1)
	{
	printf("\n1.Insert a number : \n 2.Show the link list : \n 3.to delete first element \n4.To exit list \n5.To insert at last");
	printf("\n6.Delete from the last :");
	printf("\nenter your choice :");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("\nenter a element:");
			scanf("%d",&n);
			insert(n);
		break;
		case 2:
			show();
		break;

		case 3:
			delete_s();
		break;

		case 4:
			exit(0);
		break;
		case 5:
			printf("\nwhich number you want to enter here :");
			scanf("%d",&num);
			insert_end(num);
		break;
		case 6:
			delete_end();
		break;

		default:
			printf("\ninvalid choice");
		break;
	}
	}
}
