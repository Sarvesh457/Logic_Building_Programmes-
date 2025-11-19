#include<stdio.h>

void Display(int Arr[],int iSize)
{
    int iCnt = 0;
    for(iCnt = 0; iCnt < iSize ;iCnt++)         //change
    {
        printf("%d\n",Arr[iCnt]);
    }
}

int main()
{
    int Brr[]={10,20,30,40};       

    Display(Brr,4);       //Display(100,4) Address ,4 the elements
    return 0;
}