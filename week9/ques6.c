#include <stdio.h>
int main()
{
char str1[50];
char str2[50];
printf("Entter the 1st string:\n");
scanf("%[^\n]s", str1);
printf("Entter the 2nd string:\n");
scanf("\n%[^\n]s", str2);
int i,j, flag=0;
for(i=0; i<50; i++)
{
if(str1[i]!='\0')
{
for(j=0; j<50; j++)
{
flag=0;
if(str2[j]!='\0')
{
if(str2[j]==str1[i])
{
flag=1;
break;
}
}
else
{
break;
}
}
}
else
{
if(flag==1)
{
printf("Strings are anagrams");
break;
}
}
if(flag==0)
{
printf("Strings are not anagrams");
break;
}
}
return 0;
}

