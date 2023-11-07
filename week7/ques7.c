#include<stdio.h>

void main()
{
    int n,i,j,temp;
    printf("enter the size of the array \n");
    scanf("%d",&n);

    int arr[n];
    printf("enter the elements of the array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("the array is \n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    //sorting the array
     for (i = 0; i < n - 1; i++) 
    {
        for (j = 0; j < n - i - 1; j++) 
            if (arr[j] > arr[j + 1]) 
            {
                temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
    }

    printf("sorted array \n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("|the uniques elements\n");

    printf("%d ",arr[0]);
    for(i=0;i<n-1;i++)
    {
        if(arr[i]!=arr[i+1])
        {
            printf("%d ",arr[i+1]);
        }
    }
    
}