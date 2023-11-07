#include<stdio.h>
void main()
{
    int n,i,j,sum=0;
    printf("enter the value of N\n");
    scanf("%d",&n);
    int arr[n-1];

    printf("enter the First N natural numbers leaving any one them\n");

    for(i=1;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    printf("the missing number is = %d ",(n*(n+1)/2-(sum)));

}