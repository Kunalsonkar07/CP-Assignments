#include <stdio.h>
int main()
{
    char str[50];
    printf("Enter the string:\n");
    gets(str);
    int i, count = 0, flag = 0;
    char c, d, e;
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
    for (i = 0; i < 50; i++)
    {
        d = str[i];
        e = str[count - i - 1];
        if (d == '\0' || e == '\0')
        {
            break;
        }
        else if (d != e)
        {                      //pointers se ho jayega
            flag = 1;
            break;
        }
        else
        {
            continue;
        }
    }
    if (flag == 1)
    {
        printf("%s is not a palindrome string", str);
    }
    else
    {
        printf("%s is a palindrome string", str);
    }
    return 0;
}
