#include <stdio.h>
#include <string.h>

void modify(char a[], char b[])
{
    int i = 0, j = 0, k = 0, count = 0;
    char c[100];
    while (i < strlen(a))
    {
        while (a[i] != b[j] && i < strlen(a))
        {
            c[k] = a[i];
            k++;
            i++;
        }
        int f = i;
        while (a[i] == b[j] && i < strlen(a))
        {
            count++;
            i++;
            j++;
        }

        if (count != strlen(b))
        {
            i = f;
            while (a[i] != ' ')
            {
                c[k] = a[i];
                i++;
                k++;
            }
        }
        j = 0;
    }
    c[k] = '\0';
    puts(c);
}

int main()
{
    char arr[100];
    printf("Enter a string\n");
    gets(arr);
    printf("Enter a part to delete\n");
    char brr[100];
    gets(brr);
    modify(arr, brr);
    return 0;
}