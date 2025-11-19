#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef int * IPTR;  // imp 

//O(N) TC
bool LinearSearch(int Arr[],int iSize,int iNo)
{
    int iCnt = 0,iCount = 0;

    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iCount++;
        }
    }

    if(iCount > 0)
    {
        return true;
    }
    else
    {
        return false;
    }

}
int main()
{
    int iLength = 0,iCnt = 0,iValue = 0;
    bool bRet = false;  
    IPTR iPtr = NULL;

    printf("Enter the number of elements : \n");
    scanf("%d",&iLength);
    
    //Step1 : Allocate the memory
    iPtr = (IPTR)malloc(iLength*sizeof(int));

    if(NULL == iPtr)
    {
        printf("unable to locate the memory");
        return -1;
    }

    printf("Enter the values : \n");

    for(iCnt= 0 ;iCnt < iLength;iCnt++)
    {
        scanf("%d",&iPtr[iCnt]);
    }

    printf("Enter the number to Search ");
    scanf("%d",&iValue);

    //Step 2 : Use the memory
    bRet = LinearSearch(iPtr,iLength,iValue);

    if(bRet == true)
    {
    printf("%d is Present in the data",iValue);
    }
    else
    {
        printf("%d is not Present in the data",iValue);
    }

    //Step 3 : Free the memory

    free(iPtr);

    return 0;
}