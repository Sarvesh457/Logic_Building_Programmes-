#include<stdio.h>

int CountOcuurance(char str[],char ch)            // change
{
    int iCount = 0;

    while(*str != '\0')
    {
        if (*str == ch)
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

    iRet = CountOcuurance(Arr,'d');

    printf("Number ocuurences are : %d\n",iRet);
    return 0;

}