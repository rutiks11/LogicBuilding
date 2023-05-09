// Write a program to accept numbers and x raise to y

#include <stdio.h>
#include <stdbool.h>

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

int CaculatePower(int iBase , int iPower)
{   
    int iCnt = 0;
    int iResult = 1;

    iCnt = 1;
    
    while (iCnt <= iPower)
    {
        iResult = iResult * iBase;  
        iCnt++;
    }
    
    return iResult;
}

/////////////////////////////////////////////////////
// Entry Point Function 
//////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0;
    int iRet = 0;

    printf("Enter Base: \n");
    scanf("%d",&iValue1);

    printf("Enter Power: \n");
    scanf("%d",&iValue2);

    iRet = CaculatePower(iValue1,iValue2);

    printf("Result is : %d\n", iRet);

    return 0;
}