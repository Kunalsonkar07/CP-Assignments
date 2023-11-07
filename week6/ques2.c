// find maximum and minimum element of an array

#include<stdio.h>
#include<limits.h>

void main()
{
    int n,min = INT_MAX,max= INT_MIN,i = 0;

    printf("enter the sizr of the array\n");
    scanf("%d",&n);
    int arr[n];

    printf("enter the elements of the array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n;i++)
    {
        if(arr[i]<min)
            min=arr[i];

        if(arr[i]>max)
            max= arr[i];
    }
    printf("maximum element of the array = %d \n",max);
    printf("minimum element of the array = %d \n",min);
}