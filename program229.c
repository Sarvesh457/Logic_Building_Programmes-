#include<stdio.h>

int CountCapital(char str[])            
{
    int iCount = 0;

    while(*str != '\0')
    {
        if (*str >= 'A' && *str <= 'Z')
        {
            iCount++;
        }
    str++;
    }
    return iCount;
}

int main()
{
    char Arr[50] = {'\0'};
    int iRet = 0;

    printf("Enter string :- \n");
    scanf("%[^'\n']s",Arr); 

    iRet = CountCapital(Arr);

    printf("Number Capital character occurrences are : %d\n",iRet);
    return 0;

}