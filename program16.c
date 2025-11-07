///////////////////////////////////////////////////////////////
//
//Required Header file 
//
//
///////////////////////////////////////////////////////////////


#include<stdio.h>                                   //For input output
#include<stdbool.h>                                 //For bool datatype

///////////////////////////////////////////////////////////////
//
// Function name :      CheckEvenOdd     
// Description :        It is used to check even and odd
// Input :              Integer
// Output :             Boolean
// Author :             Sarvesh Atul Mahajan
// Date :               10/10/2025
//
///////////////////////////////////////////////////////////////


bool CheckEvenOdd(int iNo)
{
    int iRem = 0;

    iRem =iNo % 2;

    if(iRem == 0)
    {   return true;    }
    else
    {   return false;   }
}
///////////////////////////////////////////////////////////////
//
// Enter point function of the application
//
///////////////////////////////////////////////////////////////

int main()
{

    int iValue = 0;
    bool bRet = false;

    printf("Enter a number:\n");
    scanf("%d",&iValue);

    bRet = CheckEvenOdd(iValue);
    
    if(bRet == true)
    {   printf("%d is Even number",iValue); }
    else
    {   printf("%d is odd number",iValue ); }


    return 0;
}