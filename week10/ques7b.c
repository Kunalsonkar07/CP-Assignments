#include<stdio.h>
#include<ctype.h>
void main()
{
	char str[100]={'0'},ch,strcopy[100],rev_cpy[100];
	int i=0,c=0,size;

	printf("enter the characters\n");
	printf("press ENTER to exit\n");
	ch = getchar();
	while(ch!='\n'&& i<100)
	{
		str[i]=ch;
		i++;
		ch=getchar();
	}
    for(i=0;str[i]!='0';i++)
    {
        if(isalpha(str[i]))
        {    strcopy[i]=str[i];
         c++;}
    }

	size = sizeof(str);
	char *p=&str[size-1];
	printf("the revrsal : \n");

    i=0;
	while(p!= &str[0])
	{
		if(*p!='0')
        {
            if(*p=strcopy[i])
            {
                c--;
                i++;
            }
        }
		p=p-1;
	}
    if(c==0)
    {
        printf("palindrome");
    }
    else{printf("not palimdrome");}

}

