// Factorial saral loop

#include <stdio.h>

int Factorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;
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
    int iRet = 0;

    printf("Enter Number \n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);
    
    printf("Result is : %d\n",iRet);
    return 0;
}
