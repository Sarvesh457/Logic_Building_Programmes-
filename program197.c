#include<stdio.h>
#include<fcntl.h> //file control.h

int main()
{
    int fd = 0;

    fd = creat("ppa.txt",0777);         // Create file

    if(fd == -1)
    {
        printf("Unable to creat file");
    }
    {
        printf("File Successfully created with fd: %d\n",fd);
    }

    return 0;
}