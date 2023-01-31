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
        temp=(struct node *)malloc(sizeof(struct node));
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
	}
}
void travesr_frwd()
{
struct node *curr=list;
        curr=(struct node *)malloc(sizeof(struct node));
         while(curr!=NULL)
{
      printf("%d",curr->data);
         curr=curr->next;

}

}
void main()
{
//   list=NULL;
   list=(struct node *)malloc(sizeof(struct node));
   list=NULL
	int  n1=5,n2=10;
//	 printf("\nEnter a number=");
  //      scanf("%d",&n2);
	struct node *head;
	head=(struct node *)malloc(sizeof(struct node));
	head->data=n1;
	head->next=NULL;
	list=head;

	insert_beg(n2);
        travesr_frwd();
}
