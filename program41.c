// Write a program to accept numbers and x raise to y

#include <stdio.h>

unsigned long int Factorial(int iNo)
{
    int iCnt = 0;
    unsigned long int iFact = 1;
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
    unsigned long int iRet = 0;

    printf("Enter Number \n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);
    
    printf("Result is : %d\n",iRet);
    return 0;
}
