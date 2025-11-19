#include<stdio.h>
#include<stdlib.h>

typedef int * IPTR;  // imp 
int Minimum(int Arr[],int iSize)
{

    int iCnt = 0,iMin = 0;

    for (iMin = Arr[iCnt],iCnt = 0; iCnt < iSize; iCnt++)
    {
        if (Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
        
    }
    return iMin;
    
}
int main()
{
    int iLength = 0,iCnt = 0,iRet = 0;  
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

    //Step 2 : Use the memory
    iRet = Minimum(iPtr,iLength);

    printf("Minimum number is: %d\n",iRet);

    //Step 3 : Free the memory

    free(iPtr);

    return 0;
}