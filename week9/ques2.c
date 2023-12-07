#include <stdio.h>
#include <string.h>
int main()
{
char str[50];
int i,j, count=1;
printf("Enter the string:\n");
scanf("%[^\n]s",str);
for(i=0; i<50; i+=count)
{
count=1;
char a1 = str[i];
if(a1!='\0')
{
for(j=i+1; j<50; j++)
{
char b1 = str[j];
if(a1!=b1)
{
break;
}
else
{
count++;
}
}
}
else
{
break;
}
printf("%c%d", a1, count);
}
return 0;
}

