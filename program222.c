#include<stdio.h>

int CountVowel(char str[])            // change
{
    int iCount = 0;

    while(*str != '\0')
    {
        if ((*str == 'a') || (*str == 'e') || (*str == 'i') || (*str == 'o') || (*str == 'u') ||
            (*str == 'A') || (*str == 'E') || (*str == 'I') || (*str == 'O') || (*str == 'U'))
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

    iRet = CountVowel(Arr);

    printf("Count of 'a' is : %d\n",iRet);
    return 0;

}