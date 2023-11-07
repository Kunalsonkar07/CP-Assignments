// VIVEK KUMAR |  D2 | 20233317
// REVERSING AND ARRAY USING RECURSION
#include <stdio.h>

void rev(int a[],int size)
{	
	static int start =0;
	if(start>size-1) 
	return;

	int temp =a[start];
	a[start]=a[size-1];
	a[size-1]=temp;
	start++;
	size--;
	rev(a,size);
	
}

int main ()
{
	int size;
	printf("Enter the size of the array :");
	scanf("%d",&size);
	int arr[size];
	for (int i=0; i<size;i++)
		scanf("%d",&arr[i]);

	printf ("Array before reversing is :\n");
	for (int i=0; i<size;i++)
	    printf ("%d ",arr[i]);

	printf("\n");

	rev(arr,size);
	
	printf ("Array after reversing is :\n");
	for (int i=0; i<size;i++)
		printf ("%d ",arr[i]);
}
