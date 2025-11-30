
#include<stdio.h>

void iCountSpace(char str[])            
{
    int iCountSpace = 0;

    while(*str != '\0')
    {
        if (*str == ' ')           // count Space
        {
            iCountSpace++;
        }
        
    str++;
}

    printf("Number of Digits : %d\n",iCountSpace);

}

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter string :- \n");
    scanf("%[^'\n']s",Arr); 

    iCountSpace(Arr);

    return 0;
}
