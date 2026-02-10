#include<stdio.h>

int main(){
    int a , mi , cs;
    printf("enter your age: ");
    scanf("%d", &a);
    printf("enter your monthly income: ");
    scanf("%d", &mi);
    printf("enter your credit score: ");
    scanf("%d", &cs);
    if (a<21)
    {printf("rejected due to age.");}
    else if(mi < 20000)
    {printf("rejected due to income.");}
    else if(cs < 600)
    {printf("rejected due to credit score.");}
    else if(cs >= 750)
    {printf("accepted with low interest");}
    else 
    {printf("accepted with high interest.");}
    return 0;
}