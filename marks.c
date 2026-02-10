#include <stdio.h>

int main()
{
    int m;
    printf("enter your marks: ");
    scanf("%d", &m);
    if (m < 0 || 100 < m)
    {
        printf("invalid marks.");
    }
    else if (m < 40)
    {
        printf("fail.");
    }
    else if (m >= 40 && 60 > m)
    {
        printf("pass.");
    }
    else if (m >= 60 && 75 > m)
    {
        printf("first class");
    }
    else if (m >= 75 && 100 >= m)
    {
        printf("distinction");
    }
    return 0;
}