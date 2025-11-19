#include<stdio.h>
#include<stdlib.h>

typedef int * IPTR;  // imp 
void Update(int Arr[],int iSize)
{
    int iCnt = 0;

    for(iCnt= 0; iCnt < iSize; iCnt++)
    {
        Arr[iCnt]++;
    }

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
    Update(iPtr,iLength);

    printf("Updated data from array is: %d\n");
    for(iCnt = 0;iCnt < iLength;iCnt++)
    {
        printf("%d\n",iPtr[iCnt]);
    }

    //Step 3 : Free the memory

    free(iPtr);

    return 0;
}