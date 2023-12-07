#include<stdio.h>

struct library
{
    long acc_num;
    char title[50];
    char author[50];
    float price;
    int flag; //0 means not issued 1 means issued
};

struct library book[50]={0};

