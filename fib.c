#include<stdio.h>
#include<malloc.h>
int main()
{
	int n;
	printf("Enter the value of n\n");
	scanf("%d",&n);
	unsigned long long int *arr;
	arr=(unsigned long long int*)malloc(sizeof(unsigned long long int)*1000);
	int i;
	arr[0]=0;
	arr[1]=1;
	for(i=2;i<100;i++)
	{
		arr[i]=arr[i-1]+arr[i-2];
		printf("arr[%d]=%d\n",i,arr[i]);
	}
	printf("The %dth Fibonocci number is %d",n,arr[n]);
	return 0;
}
