#include<stdio.h>

//iterations
int main()
{
    int iNo = 0;
    int iDigit = 0;

    printf("Enter no :\n");
    scanf("%d",&iNo);
    
    printf("-------------------------------\n");
    printf("Orignal Value of iNo is:%d\n",iNo);

    while(iNo != 0)
    {
        printf("-------------------------------\n");
        iDigit = iNo%10;
        printf("i Digit is :%d\n",iDigit);
        printf("-------------------------------\n");
        iNo = iNo /10;
        printf("iNo is: %d\n",iNo);
    }
        printf("-------------------------------\n");

    return 0;
}