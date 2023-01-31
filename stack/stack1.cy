#include<stdio.h>
struct stack
{
	int arr[10];//taking array
	int size;//size
	int tos;
};
void push(int a);//initialize array
int pop();//deletion array
int peek();//
int isfull();//when array is full make function
int isempty();//when array is empty
void display();//display all result

void display()
{
	struct stack sta;
	int i=0;
	sta.tos=-1;
       if(!isempty())
	{
		for(i=0;i<=sta.tos)
		{
			printf("\nelement %d is %d",i,sta.arr[i]);
		}
	}
	else
	{
		printf("\nstack is empty\n");
	}
}
int empty()
{
	if(sta==-1)

		return 1;
		return 0;

}
int full()
{
	if(sta.tos==sta.size-1)
		return 1;
		return 0;
}
void push(ele)
{
	if(!isfull)
	{
		sta.tos++;
		sta.s[sta.tos]=ele;
	}
	else
	{
		printf("\nstack is full");
	}

}
int pop()
{
	int x=-1;
	if(!isempty())
	{
		x=sta.s[sta.tos];
		sta.tos--;
	}
	else
	{
		printf("stack is empty");

	}
	return x;
}
