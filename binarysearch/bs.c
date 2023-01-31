#include<stdio.h>
#include<stdlib.h>
#define size 10
int com=0;
int binary_search(int arr[],int key);
int main()
{
	int arr[size]={10,20,30,40,50,60,70,80,90,100};
	int key;
	printf("enter the key element");
	scanf("%d",&key);
	if(binary_search(arr,key))
	{
		printf("%d is found in an array,no of comparisoin are %d in",key,com);
	}
	else
	{
		printf("%d is not  found in an array,no of comparisoin are %d in",key,com);

	}
 	return 0;
}
int binary_search(int arr[],int key)
{
	int left=0;
	int right=size-1;
	com=0;
	while(left<=right)
	{
		int mid=(left+right)/2;
		com++;
		if(key==arr[mid])
		return 1;
		if(key<arr[mid])
		right=mid-1;
		else
		{
			left=mid+1;
		}
	}
	return 0;
}
