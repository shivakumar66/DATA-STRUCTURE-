
#include<stdio.h>
#include<stdlib.h>
int top=-1;
int stack[50];
 void push(int x)
{
	stack[++top]=x;
}
int pop()
{
	return stack[top--];
}
void main()
{
	char exp[10];
	char *e;
	int num,n1,n2,n3;
	printf("\n enter the expression=");
	scanf("%s",exp);
	e=exp;
	while(*e!='\0')
	{
		if(isdigit(*e))
		{
			num=*e-48
;
			push(num);

		}
		else
		{
			n1=pop();
			n2=pop();
			switch(*e)
			{
				case '+':
				n3=n1+n2;
				break;
				case '-':
				n3=n2-n1;
				break;
				case '*':
				n3=n1*n2;
				break;
				case '/':
				n3=n2/n1;
				break;
			}
			push(n3);
		}
		e++;
	}
	printf("The ans of that expression %s is =%d",exp,pop());
}

