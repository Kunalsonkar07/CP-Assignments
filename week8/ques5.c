#include <stdio.h>
int main()
{
    int n;
    char str[50];
    char str1[50];
    printf("Enter the string:\n");
    gets(str);
    int i, count = 0;
    char c, d;
    for (i = 0; i < 50; i++)    //this code is wrong , but can be done by using pointers
    {

        str1[i] = str[i];
    }
    printf("The string in which contents of 1st string are copied is:\n");
    for (i = 0; i < 50; i++)
    {
        d = str1[i];
        if (d != '\0')
        {
            printf("%c", d);
        }
        else
        {
            break;
        }
    }
    return 0;
}