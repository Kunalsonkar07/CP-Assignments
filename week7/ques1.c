#include<stdio.h>
void main()
{
	int n,i,temp;
	
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

	//Swaping
	for(i=0;(i+1)<n;i=i+2)
	{
		temp=arr[i];
		arr[i]=arr[i+1];
		arr[i+1]=temp;
	}
	
	printf("array after altrnte swap\n");
	 
        for(i=0;i<n;i++)
        {
                printf("%d ",arr[i]);
        }
}

