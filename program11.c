/*
Algorithm
    START
        Accept first number as no1
        Accept second number as no2
        If the input in negative convert it into positive
        Perform Addition of no1 and no2
        Display the Addition
    STOP
*/

///////////////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
///////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////
//
//  Function name : AdditionTwoNumbers
//  Description :   It is used to perform the addition
//  Input :         Float,Float
//  Output :        Float
//  Author :        Sarvesh Atul Mahajan
//  Date :          09/10/2025
//
///////////////////////////////////////////////////////////////////////////////////
float AdditionTwoNumbers(
                            float fNo1,                 // First input
                            float fNo2                  // Second input
                            )
{
    float fSum = 0.0f;                                  // To store the result


    if(fNo1 < 0.0f)                                     //Updator
    {
        fNo1 = -fNo1;
    }
    if(fNo2 < 0.0f)
    {
        fNo2 = -fNo2;
    }

    fSum = fNo1+fNo2;                                   //Business Logic
    return fSum;
}   // End of AdditionTwoNumber

///////////////////////////////////////////////////////////////////////////////////
//  
//  Entry point function for the application
//
///////////////////////////////////////////////////////////////////////////////////

int main()
{
    float fValue1 = 0.0f , fValue2 = 0.0f;              // To accept the user input
    float fRet = 0.0f;                                  // To store the result
    
    printf("Enter first number\n");
    scanf("%f",&fValue1);

    printf("Enter second number\n");
    scanf("%f",&fValue2);

    fRet =AdditionTwoNumbers(fValue1,fValue2);          // Method call

    printf("Addition is : %f\n",fRet);

    return 0;
}   // End of main


///////////////////////////////////////////////////////////////////////////////////
//
//  Test cases successfully handled by the application 
//
//  Input 1 : 10.5      Input 2 : 3.2       Output : 13.7
//  Input 1 : -10.5     Input 2 : 3.2       Output : 13.7
//  Input 1 : 10.5      Input 2 : -3.2      Output : 13.7
//  Input 1 : -10.5     Input 2 : 3-.2      Output : 13.7
//  Input 1 : 10.5      Input 2 : 0.0       Output : 13.7
///////////////////////////////////////////////////////////////////////////////////