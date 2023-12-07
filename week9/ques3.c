#include <stdio.h>
#include <string.h>
int main()
{
    char str[50];
    char str1[50];
    char str2[50];
    printf("Enter the 1st string:\n");
    //    scanf("%[^\n]s",str);
    gets(str);
    printf("Enter the 2nd string:\n");
    gets(str1);
    // scanf("\n%[^\n]s",str);
    int i, j, len1 = 0, flag = 0;
    for (i = 0; i < 50; i++)
    {
        if (str1[i] != '\0')
        {
            len1++;
        }
        else
        {
            break;
        }
    }
    int p = 1;
    for (i = 0; i < len1; i++)
    {
        int j = p, z = 0;
        for (; j < len1; j++)
        {
            if (str1[j] != '\0')
            {
                str2[z] = str1[j];
                z++;
            }
        }
        for (int k = 0; k < p; k++)
        {
            if (str1[k] != '\0')
            {
                str2[z] = str1[k];
                z++;
            }
        }
        for (int i = 0; i < 50; i++)
        {
            if (i >= len1)
            {
                str2[i] = '\0';
            }
        }
        if (strcmp(str, str2) == 0)
        {
            printf("%s is rotation of %s", str1, str);
            flag = 1;
            break;
        }
        else
        {
            strcpy(str2, "");
        }
        p++;
    }
    if (flag == 0)
    {
        printf("%s is not rotation of %s", str1, str);
    }
    return 0;
}