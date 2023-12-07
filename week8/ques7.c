#include <stdio.h>
int main()
{
    int n, len1, len2;
    char str[50];
    char str1[50];
    char str2[100];
    printf("The 1st string is:\n");
    gets(str);
    printf("The 2nd string is:\n");
    gets(str1);
    int i, flag = 0;
    char c, d, e;
    for (i = 0; i < 50; i++)
    {
        c = str[i];
        d = str1[i];
        if (c == '\0' || d == '\0')
        {
            break;
        }
        else
        {
            int e = c;
            int f = d;
            if (e > f)
            {
                flag = 1;
                break;
            }
            else if (e < f)
            {
                flag = -1;
                break;
            }
            else
            {
                flag = 0;
            }
        }
    }
    if (flag == 1)
    {
        printf("%s is greater than %s lexicographically", str, str1);
    }
    else if (flag == -1)
    {
        printf("%s is lesser than %s lexicographically", str, str1);
    }
    else
    {
        printf("%s is equal to %s lexicographically", str, str1);
    }
    return 0;
}