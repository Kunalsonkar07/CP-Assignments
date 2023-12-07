#include<stdio.h>
void main()
{
	int arr[4][4];
	int i,j;
	int temp_arr[4][4];
	
	printf("enter the array elememts\n");
	for(i=0;i<4;i++)
{
		for(j=0;j<4;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	printf("orignal matrix : ");
	for(i=0;i<4;i++)
        {
                for(j=0;j<4;j++)
                {
                        printf("%d",arr[i][j]);
                }
		printf("\n");
        }
	for(i=0;i<4;i++)
        {
                for(j=0;j<4;j++)
                {
                        temp_arr[i][j]=arr[j][i];
                }
		
        }

	printf("the transpose of matrix :\n");
	for(i=0;i<4;i++)
        {
                for(j=0;j<4;j++)
                {
                        printf("%d",temp_arr[i][j]);
                }
		printf("\n");
        }
	
}


	


	

