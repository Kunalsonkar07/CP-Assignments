#include<stdio.h>
void main()
{
    int n,i,j;
    printf("enter the size of the array\n");
    scanf("%d",&n);
    int arr[n];
    printf("enter the array elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=1;i<n;i++)
    {
        if(arr[i]>arr[i+1] && arr[i]>arr[i-1])
        {
            printf("first peak element = %d", arr[i]);
            break;
        }
    }
}