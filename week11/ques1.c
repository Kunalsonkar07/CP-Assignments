#include<stdio.h>
struct data
{
    int roll;
    char name[50];
    char dept[60];
    int year;
};

struct data details[5];//assuming there are 5 students

void name_print(int);
void data_print(int);

int main()
{
    int i,yr,rl;

    printf("enter the details of the students\n\n roll number\n name \n depratment \n year\n");

    for(i = 0;i<5;i++)
    {
        scanf("%d%s%s%d",&details[i].roll,details[i].name,details[i].dept,&details[i].year);
    }

    printf("enter the year\n\n");

    scanf("%d",&yr);

    printf(" the names of student of this year \n\n");

    name_print(yr);

    printf("enter a roll number \n\n");

    scanf("%d",&rl);

    data_print(rl);

    return 0;


    
}

void name_print(int y)
{
    int i;
    for(i=0;i<5;i++)
    {
        if(details[i].year==y)
        {
            printf("%s\n",details[i].name);
        }
    }
}


void data_print(int r)
{
    int i;
    for(i =0 ;i<5;i++)
    {
        if(details[i].roll == r)
        {
            printf("%s\n",details[i].name);
            printf("%s\n",details[i].dept);
            printf("%d\n",details[i].year);
        }
    }
}