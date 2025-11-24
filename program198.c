#include<stdio.h>
#include<fcntl.h> //file control.h
#include<unistd.h> // if unlink gives error

int main()
{
    unlink("ppa.txt");          // Delete

    return 0;
}