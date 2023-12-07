#include<stdio.h>
void main()
{
    char c;
    int l=0;
    //creating a file
    FILE *f1,*f2;

    f1=fopen("file1","w");

    while((c=getchar())!=EOF)
    {
        putc(c,f1);
    }
    fclose(f1);

    //reading file with line numbers
    f1=fopen("file1","r");

    while(1)
    {
        c=getc(f1);
        if(c=='\n')
        {
            l++;
            printf("\n%d",l);
        }
        if(c!='\n' && c!=EOF)
        {
            printf("%c",c);
        }
        if(c==EOF)
            break;

    }
    

    
}