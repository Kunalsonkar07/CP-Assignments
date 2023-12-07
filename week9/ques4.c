#include <stdio.h>
int main()
{
int m,n,i,j;
printf("Enter the number of rows\n");
scanf("%d", &m);
printf("Enter the number of columns\n");
scanf("%d", &n);
int a[m][n];
printf("Enter the elements\n");
for(i=0; i<m; i++)
{
for(j=0; j<n; j++)
{
scanf("%d", &a[i][j]);
}
}
printf("The original matrix is\n");
for(i=0; i<m; i++)
{
for(j=0; j<n; j++)
{
printf("%d ", a[i][j]);
}
printf("\n");
}
printf("The rotated matrix is:\n");
for(j=n-1; j>=0; j--)
{
for(i=0; i<m; i++)
{
printf("%d ", a[i][j]);
}
printf("\n");
}
return 0;
}