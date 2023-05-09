// Write a program to accept numbers and x raise to y

#include <stdio.h>

typedef unsigned long int ULONG;

ULONG Factorial(int iNo)
{
    // Updator
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iCnt = 0;
    ULONG iFact = 1;
    //    1         2           3
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iFact = iFact * iCnt;    // 4
    }
    
    return iFact;
}

//////////////////////////////////////////////////////
//  Entry Point Function 
//////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    ULONG iRet = 0;

    printf("Enter Number \n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);
    
    printf("Result is : %d\n",iRet);
    return 0;
}
