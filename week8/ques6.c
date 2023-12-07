#include <stdio.h>
int length(char string[50])
{
     int i,count=0; char c;
     for(i=0; i<50; i++)
    {
    c = string[i];
    if(c!='\0')
    {
    count++;
    }
    else
    {
    break;
    }
    }
    return count;
}
int main()
{    
    int n,i,len1,len2;
    char str[50];
    char str1[50];
    char str2[100];
    printf("The 1st string is:\n");
    gets(str);
     printf("The 2nd string is:\n");
    gets(str1);
   len1 = length(str);
    len2 = length(str1);
    int count=0; char c,d,e;
     for(i=0; i<len1+len2; i++)
    {
        if(i<len1)
        {
    str2[i] = str[i];
        }
        else{
            str2[i] = str1[i-len1];
        }
        }
    printf("The concatenated string is:\n");
    for(i=0; i<len1+len2; i++)
    {
        e = str2[i];
        printf("%c", e);
    }
    return 0;
}