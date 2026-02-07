#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE first,PPNODE last,int no)
{}
void Insertlast(PPNODE first,PPNODE last,int no)
{}
void InsertAtPos(PPNODE first,PPNODE last,int no,int pos)
{}

void DeleteFirst(PPNODE first,PPNODE last)
{}
void Deletelast(PPNODE first,PPNODE last)
{}
void DeleteAtPos(PPNODE first,PPNODE last)
{}

void Display(PNODE first,PNODE last)
{

}

int Count(PNODE first,PNODE last)
{
    return 0;
}
int main()
{
    PNODE head = NULL;
    PNODE tail = NULL;
    return 0;
}