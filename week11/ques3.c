#include<stdio.h>

struct judge
{
    int score1;
    int score2;
    int score3;
    int score_sum;
};

struct judge p[5];

void main()
{
    int i;
    for(i=0;i<5;i++)
    {
        printf("enter the scores for %d candidate from 1 to 5\n",i+1);
        scanf("%d",&p[i].score1);
        scanf("%d",&p[i].score2);
        scanf("%d",&p[i].score3);
        p[i].score_sum = p[i].score1+p[i].score2+p[i].score3;
    }
    for(i=0;i<5;i++)
    {
        printf("%d\n",p[i].score_sum);
    }
}