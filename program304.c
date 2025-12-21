#include<stdio.h>

#pragma pack(1)

struct node                     //user defined data type
{
    int data;
    struct node * next;                     // self referential pointer
};

int main()
{
    struct node obj;                    

    printf("%ld\n",sizeof(obj));

    return 0;
}