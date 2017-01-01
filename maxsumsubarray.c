#include<stdio.h>
#include<limits.h>
#include<malloc.h>
int check(int *arr,int n);
int main()
{
	int n;
	int *arr;
	printf("Enter the size of the array\n");
	scanf("%d",&n);
	arr = (int*)malloc(sizeof(int)*n);
	printf("Enter the array elements\n");
	int i;
	for(i = 0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	if(check(arr,n)==1)
	{
		int sum=0;
		for(i=0;i<n;i++)
			sum+=arr[i];
		printf("The max sum izz %d",-1*sum);
	}
	else
	{
	int curr,max;
	curr=0;
	max=INT_MIN;
//	printf("\t\t%lld",max);
	
	for(i=0;i<n;i++)
	{
		curr+=arr[i];
		if(curr<0)
			curr=0;
		if(curr>=max)
			max=curr;
	}
	printf("The max sum subsequence is %d",max);
	}
	return 0;
	
}
int check(int *arr,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(arr[i]>=0)
			return 0;
	}
	return 1;	
}
