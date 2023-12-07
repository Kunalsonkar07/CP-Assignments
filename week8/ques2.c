#include<stdio.h>
void main()
{
	int m;
	scanf("%d",&m);
	int arr[m][m];
	int i,j,flag=0;
	
	
	printf("enter the array elememts\n");
	for(i=0;i<m;i++)
        {
		for(j=0;j<m;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	
	for(i=0;i<m;i++)
        {
                for(j=0;j<m;j++)
                {
                        if(arr[i][j]!=arr[j][i])
				flag = flag + 1;
                }
        }
	if(flag==0)
		printf("a symmetri matrix\n");
	else
		printf("not symmetric matrix\n");
}
