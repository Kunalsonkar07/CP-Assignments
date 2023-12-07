#include <stdio.h>
int main()
{
int n,i,j,digit=0;
printf("Enter the number:\n");
scanf("%d", &n);
int no1=n;
while(no1!=0)
{
digit++;
no1/=10;
}
int no=n, a[digit],p=0 ;
while(no!=0)
{
int rem = no%10;
a[p] = rem;
p++;
no/=10;
}
printf("Digit:          ");
for(i=0; i<10; i++)
{
printf("%d ", i);
}
printf("\n");
printf("Occurrences:    ");
for(i=0; i<10; i++)
{
int count=0;
for(j=0; j<digit; j++)
{
if(a[j]==i)
{
count++;
}
}
printf("%d ", count);
}
return 0;
}