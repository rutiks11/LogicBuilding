// Factorial

#include <stdio.h>

int Factorial(int iNo)
{
    int iCnt = 0;
    int iResult = 1;
    //    1         2           3
    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        iResult = iResult * iCnt;    // 4
    }
    
    return iResult;
}

//////////////////////////////////////////////////////
//  Entry Point Function 
//////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number \n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);
    
    printf("Result is : %d\n",iRet);
    return 0;
}
