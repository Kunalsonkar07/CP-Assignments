
#include <stdio.h>
#include <ctype.h>

int main()
{
    FILE *ptr1 = fopen("sample1.txt", "r");
    FILE *ptr2 = fopen("sample2.txt", "w");
    char ch;
    while ((ch = fgetc(ptr1)) != EOF)
    {
        ch = tolower(ch);
        fputc(ch, ptr2);
    }

    return 0;
}