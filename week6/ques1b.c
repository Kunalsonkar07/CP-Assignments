// VIVEK KUMAR | 20233317 | D2
// reversing an array

#include<stdio.h>

void swap(int *a, int *b)
{
    int t;

    t = *a;
    *a = *b;
    *b = t;

}
void main()
{
    int i,n,start,end, arr[n];

    printf("enter the size of the array\n");
    scanf("%d",&n);

    printf("enter the elements of the array\n");
    
    for(i = 0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("target 1 \n");
    printf("the array elements are \n");
    for(i = 0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

    start = 0, end = n-1;

    while(start<=end)
    {
        swap(&arr[start],&arr[end]);
        start = start + 1;
        end = end -1;
    }

    printf("array after revrsing ");
    for(i = 0; i<n;i++)
    {
        printf("%d",arr[i]);
    }
}