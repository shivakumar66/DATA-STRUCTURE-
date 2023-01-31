#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *list;
void insert_beg(int x)
{
    struct node *temp;
        temp=(struct node*)malloc(sizeof(struct node));
       if(list==NULL)
	{
             temp->data=x;
             temp->next=NULL;
              list=temp;
	}
      else
	{
           temp->data=x;
             temp->next=list;
              list=temp;
		printf("\nlist2=%d",*list);
	}
}
void travesr_frwd()
//struct node *curr=list;
{
struct node *curr=list;
        curr=(struct node*)malloc(sizeof(struct node));
	printf("\ncurr=%d",curr);

}
void main()
{
  // list==NULL;
   list=(struct node *)malloc(sizeof(struct node));
	list==NULL;
	int  n1=5,n2=10;
//	 printf("\nEnter a number=");
  //      scanf("%d",&n2);
	struct node *head;
	head=(struct node*)malloc(sizeof(struct node));
	head->data=5;
	head->next=list;
	list=head;
	printf("\nlist=%d",*list);

	insert_beg(10);
        travesr_frwd();
}
