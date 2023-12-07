#include<stdio.h>
void main()
{	int i,j,k,l;
	int m,n;
	int x,y;
	// for firat matric mXn
	printf("enter the row and column of matrix\n");
	scanf("%d%d",&m,&n);
	int arr[m][n];
	printf("enter the elmetnts of first matix");

	for(i=0;i<m;i++)
        {
                for(j=0;j<n;j++)
                {
                        scanf("%d",&arr[i][j]);
                }
        }
	printf("first matrix \n");
	for(i=0;i<m;i++)
        {
                for(j=0;j<n;j++)
                {
                        printf("%d",arr[i][j]);
                }
		printf("\n");
        }

	//for second matrix xXy
	printf("enter the row and column of matrix\n");
        scanf("%d%d",&x,&y);
        int brr[x][y];
        printf("enter the elmetnts of second matix");

        for(i=0;i<x;i++)
        {
                for(j=0;j<y;j++)
                {
                        scanf("%d",&arr[i][j]);
                }
        }
	printf("the second marix \n");
	for(i=0;i<x;i++)
        {
                for(j=0;j<y;j++)
                {
                        printf("%d",brr[i][j]);
                }
		printf("\n");
        }
	int res[m][y];
	int elem=0;
	//multiplicationof the arrays
	if(n==x)
{
	for(i=0;i<m;i++)
	{
		for(l=0;l<y;l++)
		{

			for(j=0;j<n;j++)
			{
				elem = elem + arr[i][j]*brr[j][l];
			}
			res[i][l]=elem;
			elem=0;
		}
	}
	for(i=0;i<m;i++)
        {
                for(j=0;j<y;j++)
                {
                        printf("%d",res[i][j]);
                }
		printf("\n");
        }

}
	else
		{printf("multoplication od notpossible\n");}
	
}
