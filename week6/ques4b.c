/* Vivek Kumar | D2 | 20233317*/

// modifies bubble sort
#include<stdio.h>
void main()
{
    int n,i,j,temp,c=1;
    printf("enter the size of the array \n");
    scanf("%d",&n);
    int arr[n];
    
    printf("entert he array elements\n");
    for(i = 0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i = 0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    

    // bubble sort 
    for (i = 0; (i < n - 1 && c!=0); i++) 
    { 
		c=0;
        for (j = 0; j < n - i - 1; j++) 
        {    if (arr[j] > arr[j + 1])
            {
                int temp = arr[j]; 
                arr[j] = arr[j+1]; 
                arr[j+1] = temp;
				c++;
            }
        }
	}
    printf("sorted array \n");
    for(i = 0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    
}