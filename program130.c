#include<stdio.h>
#include<stdlib.h>

int CountOdd(int Arr[],int iSize)
{
    int iCnt = 0,iCount = 0;
    for(iCnt = 0; iCnt < iSize ;iCnt++)         //change
    {
        if((Arr[iCnt]%2) == 1 )
        {
        iCount++;
        }
    }
    return iCount;
}

int main()
{
    int iLength = 0,iCnt = 0,iRet = 0;
    int *ptr = NULL;

    printf("Enter number of elements : ");
    scanf("%d",&iLength);

    ptr = (int*)malloc(iLength*sizeof(int));
    if(NULL == ptr)                             //industrial way of coding                         
    {
        printf("Enable to locate memory");

        return -1;
    }
    
    printf("Enter the elements : \n");
    for(iCnt = 0;iCnt < iLength;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    iRet = CountOdd(ptr,iLength);

    printf("Number of odd elements are :%d",iRet);
    
    free(ptr);
    return 0;
}