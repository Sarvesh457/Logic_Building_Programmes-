#include<stdio.h>
#include<fcntl.h> //file control.h
#include<unistd.h>
#include<io.h>

int main()
{
    int fd1 = 0,fd2 =0,fd3 = 0;

    fd1 = open("ppa.txt",O_RDONLY);     //UFDT Array index
    printf("fd1 : %d\n",fd1);           //3

    fd2 = open("lb.txt",O_RDONLY);      //4
    printf("fd2 : %d\n",fd2);

    fd3 = open("Demo.txt",O_RDONLY);    //5
    printf("fd3 : %d\n",fd3);

    return 0;
}