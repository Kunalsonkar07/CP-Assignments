#include<stdio.h>
#include<stdlib.h>
#define RANK 13
#define SUITE 4
void main()
{
    int rank, suite;
    char suit_code[] = {'c','d','h','5'};
    char rank_code[] = {'2','3','4','5','6','7','8','9','T','j','q','k','A'};

    int in_hand[SUITE][RANK]={0};

    int no_of_cards;
    srand(rand());
    srand((unsigned) time());
    printf("int hand :\n");
    scanf("%d",&no_of_cards);

    while(no_of_cards>0)
    {
        suite = rand()%SUITE;
        rank = rand()%RANK;

        if (!in_hand[suite][rank])
        {
            in_hand[suite][rank] = 1;
            printf("%c %c",suit_code,rank_code);
            no_of_cards--;
        }
    }
}