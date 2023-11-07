#include<stdio.h>
void main()
{
	int i,j,temp,n;

	printf("enter the size of the array\n");
	scanf("%d",&n);
	int arr[n];

	printf("enter the array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}

	printf("the originalarray is \n");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if((arr[i]%2!=0 && arr[j]%2==0))// || (arr[i]%2!=0 && arr[j]%2==0))
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
				i++;
			}
		}
	}
	printf("the interchnaged array is \n");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}
