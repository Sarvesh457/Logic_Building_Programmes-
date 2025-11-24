#include<stdio.h>
#include<fcntl.h> //file control.h

int main()
{
    int fd = 0;
    char FileName[20];

    printf("Enter the name of file you want to create: \n");
    scanf("%s",FileName);

    fd = creat(FileName,0777);         // Create file

    if(fd == -1)
    {
        printf("Unable to creat file");
    }
    {
        printf("File Successfully created with fd: %d\n",fd);
    }

    return 0;
}