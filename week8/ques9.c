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
    printf("The reversed string is:\n");
    for (i = count - 1; i >= 0; i--)
    {
        c = str[i];
        printf("%c", c);
    }
    return 0;
}
