#include <stdio.h>
#include <string.h>
int main()
{
char str[50];
int i, count=0;
printf("Enter the string:\n");
scanf("%[^\n]s",str);
for(i=0; i<50; i++)
{
char ch = str[i];
if(ch!='\0')
{
    if((ch=='A'||ch=='E'||ch=='I' ||ch=='O'||ch=='U'|| ch=='a'||ch=='e'||ch=='i' ||ch=='o'||ch=='u'))
{
count++;
}
}
else{
    break;
}
}
printf("Number of vowels in string is: %d", count);
return 0;
}