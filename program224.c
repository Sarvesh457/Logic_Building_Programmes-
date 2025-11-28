#include<stdio.h>

int CountOccurrence(char str[],char ch)            // change
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

    char cValue = '\0';

    printf("Enter string :- \n");
    scanf("%[^'\n']s",Arr); 

    
    printf("Enter the Character :\n");          //  issue
    scanf("%c",&cValue);  

    iRet = CountOccurrence(Arr,cValue);

    printf("Number occurrences are : %d\n",iRet);
    return 0;

}