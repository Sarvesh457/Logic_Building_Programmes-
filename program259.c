#include<stdio.h>

void ReverseDisplay(char *src)
{   
    char *temp = src;
    
    while(*src !='\0')
    {
        src++;
    }

    while(src >= temp)
    {
        printf("%c",*src);
        src--;
    }

    printf("\n");
}

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter string :\n");
    scanf(" %[^'\n']s",Arr);

    ReverseDisplay(Arr);

    return 0;
}