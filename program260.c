#include<stdio.h>

void strReverseDisplay(char *src)
{   
    char temp ='\0';

    char *end = src;
    char *start = src;

    while(*end !='\0')
    {
        end++;
    }
    end--;

    while(start < end)
    {
        temp = *start;
        *start = *end;
        *end= temp;
        end--;
        start++;
    }

    printf("\n");
}

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter string :\n");
    scanf("%[^'\n']s",Arr);


    strReverseDisplay(Arr);

    printf("Updated String is : %s\n",Arr);
    return 0;
}