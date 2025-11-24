#include<stdio.h>
#include<fcntl.h> //file control.h
#include<unistd.h>
#include<io.h>

int main()
{
    int fd = 0,iRet = 0;
    char FileName[20];
    char Data[50];

    printf("Enter the name of file:\n");
    scanf("%s",FileName);
    
    fd = open(FileName,O_RDWR);

    if(fd == -1)
    {
        printf("Unable to open \n");
        return -1;
    }

    iRet = read(fd,Data,7);           //read
    printf("%d Bytes gets successfully read\n",iRet);       //garbade issue

    printf("Data form file : %s\n",Data);

    close(fd);



    return 0;
}