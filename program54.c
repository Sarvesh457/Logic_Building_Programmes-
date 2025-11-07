//Factors Count
#include<stdio.h>
#include<stdbool.h>

bool CheckPrime(int iNo)
{
    int iCnt = 0;
    int iFrequency = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for  (iCnt = 2; iCnt <=(iNo/2); iCnt++)
    {
        if ((iNo%iCnt)==0)
        {
            iFrequency++;
        }
    }
    if(iFrequency == 0)     //no factor
    {
        return true;
    }
    else                    //Atleast one factor
    {
        return false;
    }

}


int main()
{
    int iValue = 0 ;
    bool  bRet = false;

    printf("Enter the number:\n");
    scanf("%d",&iValue);

    bRet = CheckPrime(iValue);

    if(bRet == true)
    {
        printf("%d is Prime Number",iValue);
    }
    else
    {
        printf("%d is not a Prime Number",iValue);
    }
    return 0;
}