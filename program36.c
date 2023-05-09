// Write a program to accept numbers and x raise to y

#include <stdio.h>
#include <stdbool.h>

typedef unsigned long int ULONG;

//////////////////////////////////////////////////////////////////////////////////////
//  
//  Funciton Name : ChkPrime 
//  Intput        : integer
//  Output        : boolean
//  Author        : Rutik Rajendra Shinde
//  Description   : Accept x and y, Calculate Power
//  Date          : 03/05/2023
//
//////////////////////////////////////////////////////////////////////////////////////

ULONG CaculatePower(int iBase , int iPower)
{   
    int iCnt = 0;
    ULONG iResult = 1;

    if((iBase < 0) || (iPower < 0))
    {   
        printf("Invalid Input\n");
        printf("Note: Enter Positive Number! ");
        
        return 0;
    }

    for(iCnt = 1; iCnt <= iPower ; iCnt++)
    {
        iResult = iResult * iBase;  
    }

    return iResult;
}

/////////////////////////////////////////////////////
// Entry Point Function 
//////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0;
    ULONG iRet = 0;

    printf("Enter Base: \n");
    scanf("%d",&iValue1);

    printf("Enter Power: \n");
    scanf("%d",&iValue2);

    iRet = CaculatePower(iValue1,iValue2);

    printf("Result is : %d\n", iRet);

    return 0;
}
