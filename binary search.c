#include<stdio.h>
#include<malloc.h>
int first(int *arr, int n, int x);
int last(int *arr, int n, int x);
int main()
{
	int n;
	printf("Enter the number of elements");
	int *arr;
	scanf("%d",&n);
	arr = (int*)malloc(sizeof(int)*n);
	printf("Enter the array elements\n");
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the element to be searched\n");
	int x;
	scanf("%d",&x);
	printf("The first occourance of %d is at %d",x,first(arr,n,x)+1);
	printf("The last occourance of %d is at %d",x,last(arr,n,x)-1);
	return 0;
}
int first(int *arr, int n, int x)
{
	int mid;
	int low,high;
	low=0;high=n-1;
	while(low<high)
	{
		mid=(low+high)/2;
		if(x==arr[mid])
		{
			while(arr[mid]==x)
				mid--;
			return mid;
		}
		else if(x<arr[mid])
			high=mid-1;
		else
			low=mid+1;
	}
	return -1;
}
int last(int *arr, int n, int x)
{
	int mid;
	int low,high;
	low=0;high=n-1;
	while(low<high)
	{
		mid=(low+high)/2;
		if(x==arr[mid])
		{
			while(arr[mid]==x)
				mid++;
			return mid;
		}
		else if(x<arr[mid])
			high=mid-1;
		else
			low=mid+1;
	}
	return -1;
}
