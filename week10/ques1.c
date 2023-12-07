#include<stdio.h>
#include<limits.h>
void maxmin(int* , int);
void main()
{
	int n,i;



	printf("enter the size of the array\n");
	scanf("%d",&n);
	int arr[n];

	printf("enter the array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}

	printf("the array elements\n");
        for(i=0;i<n;i++)
        {
                printf("%d ",arr[i]);
	}

	maxmin(arr,n);
}

void maxmin(int *p,int size)
{
	int max=INT_MIN,min = INT_MAX;
	int temp =size;
	
	while(size>0)
	{
		if(*p>max)
		{ max = *p;}
		if(*p<min)
		{ min = *p;}
		size--;  /*since no bounding can be applied on p being point, so last option is the size of the array so s to exit the loop*/
		p++;
	}
	printf("maximum elemnt = %d\n",max);
	printf("minimum elemnt = %d\n",min);
}
	
	

     
