#include <stdio.h>
int main()
{
    char str[50];
    printf("Enter the string:\n");
    gets(str);
    int i, count = 0;
    char c;
    for (i = 0; i < 50; i++)
    {
        c = str[i];
        if (c != '\0')
        {
            count++;
        }
        else
        {
            break;
        }
    }
    printf("%d is length of string", count);
    return 0;
}