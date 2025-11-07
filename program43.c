
#include<stdio.h>

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter First Number:\n");
    scanf("%d",&iValue1);

    printf("Enter Second Number:\n");
    scanf("%d",&iValue2);

    if((iValue1%iValue2)==0)
    {
        printf("It is completely Divisible\n");
    }
    else
    {
        printf("It is not completely Divisible\n");
    }

    return 0;
}