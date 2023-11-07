//binary search 
#include<stdio.h>
void main()
{
    int n,i,s,e,mid,num,key;

    printf("enter the size of the array \n");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements of the array \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("enter the number ot find");
    scanf("%d",&num);

    // applying bunary search
    s=0;
    e=n-1;
    mid = s+(e-s)/2;
    key = -1;

    while(s<=e)
    {
        if(num==arr[mid])
           key = mid;
        
        if(num > arr[mid])
            s = mid +1;
        else
            e=mid-1;

        mid = s+(e-s)/2;

    }
    printf("position = %d th index",key);

}