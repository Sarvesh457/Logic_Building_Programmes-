#include<stdio.h>

int main()
{
    char Name[50] = {'\0'};

    printf("Enter your name :- \n");
    scanf("%s",Name);                       //take the array for character till the first space

    printf("Hello : %s\n",Name);


    return 0;

}