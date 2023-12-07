#include<stdio.h>
void main()
{
	char str[100]={'0'},ch;
	int i=0,size;

	printf("enter the characters\n");
	printf("press ENTER to exit\n");
	ch = getchar();
	while(ch!='\n'&& i<100)
	{
		str[i]=ch;
		i++;
		ch=getchar();
	}
	size = sizeof(str);
	char *p=&str[size-1];
	printf("the revrsal : \n");
	while(p!= &str[0])
	{
		if(*p!='0')
			printf("%c",*p);
		p=p-1;
	}  
}

