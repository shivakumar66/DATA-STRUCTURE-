#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};
struct node *list;

//Insert elements
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
//		printf("\nlist2=%d",*list);
	}
}

//Display
void travesr_frwd()
{
struct node *curr;
        curr=(struct node*)malloc(sizeof(struct node));
	curr=list;
//	printf("\ncurr=%d",curr->data);
		printf("List elements : ");
        while(curr!=NULL)
        {

			if(curr->data!=0)
			{

      			printf("%d ",curr->data);
			}

         	curr = curr->next;

    	}
		printf("\n\n--------------------------------------------------------------------------------------------\n");

}



// Insert element at end
void insert_end(int ele)
{
	struct node *curr;
    struct node *temp;
         temp=(struct node*)malloc(sizeof(struct node));
      temp->data=ele;
	temp->next=NULL;
	 if(list== NULL)
	     list=temp;
	else
	{
	      curr=list;
 		while(curr->next!=NULL)
                     curr=curr->next;
	        curr->next=temp;
	}
}

// Insert after intended number
void insert_after(int sel,int ele)
{
	struct node *curr;
	curr=list;
	struct node *temp;
	while(curr!=NULL && curr->data != sel)
	{
               curr=curr->next;
	     if(curr!=NULL)
		{
		   temp=(struct node*)malloc(sizeof(struct node));

		 temp->data=ele;
		temp->next=curr->next;
		curr->next=temp;
		}
		else
			printf("sel not found");
         }
}

// Inser before intended number
void insert_before(int sel,int ele)
{
	if(list!=NULL)
	{
	 	if(list->data==sel)
	   	{
			struct node *temp;
            temp=(struct node*)malloc(sizeof(struct node));

            temp->data=ele;
        	temp->next=list;
			list=temp;
		}
	    else
    	{
			struct node *curr;
			curr=list;
        	while(curr->next!=NULL && curr->next->data!=sel) 
			{
		    	curr=curr->next;
			}
			if(curr==NULL)
			{
				printf("element is not found");
			}
            else
			{
				struct node *temp;
                temp=(struct node*)malloc(sizeof(struct node));

                temp->data=ele;
                temp->next=curr->next;
				curr->next=temp;
            }
		}
	}
}

// Delete begining element
int delete_beg()
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
	   printf("list is empty ");
		return x;
}

// Delete last element
int delete_last()
{
	int x=-1;
	struct node *curr,*temp;
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
              printf("list is empty");
		return x;

}

//delete selected element
void delete_sel(int sel)
{
	struct node *curr,*temp;
	

	if(list!=NULL)
	{
		if(list->data==sel)
		{
			temp=list;
			list=temp->next;
			free(temp);
		}
		else 
		{
			while(curr->next!=NULL && curr->next !=sel)
			{
				curr=curr->next;
 			}

			if(curr->next==NULL) {
				printf("element not found");
			}
			else
			{
				temp=curr->next;
				curr->next=temp->next;
				free(temp);
			}
		}
	}
    else
      printf("list is empty");
}




// main() function
void main()
{
	 int choice,num,p,s;      
	 list=(struct node *)malloc(sizeof(struct node));

	while(1)
	{
		printf("Choose Operation : ");
		printf("\n1.for insert number : ");
		printf("\n2.for delete number = ");
		printf("\n3.for show ");
                printf("\n4.for insert end number : ");
                printf("\n5.for delete end number = ");
		printf("\n6.insert after element =");
		printf("\n7.insert before element = ");
		printf("\n8.delete specific element = ");



		scanf("%d", &choice);

        	switch(choice)
		{
			case 1:
				printf("Enter element : ");
				scanf("%d", &num);
				insert_beg(num);
				break;
			case 2:
				delete_beg();
				break;
			case 3:
				travesr_frwd();
				break;
			case 4:
                                printf("Enter element : ");
                                int num;
                                scanf("%d", &num);
                                insert_end(num);
                                break;
                        case 5:
                                 delete_last();
                                break;
                        case 6:
				printf("\nselect the position=");
				scanf("%d",&p);
				printf("\nwhich node you want=");
				scanf("%d",&s);
				insert_after(p,s);
                                break;

			case 7:
				 printf("\nselect the position=");
                                scanf("%d",&p);
                                printf("\nwhich node you want=");
                                scanf("%d",&s);
                                insert_before(p,s);
				break;
 			case 8:
                               printf("enter the element should be deleted");
				scanf("%d",&p);
                                delete_sel(p);
			default: 
				printf("Invalid choice\n");
				break;
		}
	}	
}


//End of Program
