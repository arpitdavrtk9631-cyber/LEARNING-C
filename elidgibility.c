#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    if (age < 0)
    {printf("invalid age");}
    else if (age < 18)
    {
        printf("not eligible for anything.");
    }
    else if (18 <= age && age < 21)
    {
        printf("you can drive and vote but can not drink.");
    }
    else if (age >= 21)
    {
        printf("you can drive , vote and drink too.");
    }
    
    return 0;
}