#include<stdio.h>
#include<fcntl.h> //file control.h
#include<unistd.h>
#include<io.h>

int main()
{
    int fd = 0;
    char FileName[20];

    printf("Enter the name of file you want to Open: \n");
    scanf("%s",FileName);

    fd = open(FileName,O_RDWR);         //open
    
    if(fd == -1)
    {
        printf("Unable to open\n");
    }
    else
    {
        printf("File successfully open with fd : %d\n",fd);
    }

    close(fd);

    return 0;
}