// Write a program to check whether given number is Perfect or not 
// Seperate Sumfactors and ChkPerfect

#include <stdio.h>
#include <stdbool.h>

int SumFactors(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt =1; iCnt <= (iNo/2); iCnt++)
    {
        if((iNo%iCnt) == 0)
        {
            iSum = iSum + iCnt;
        }
    }

    return iSum;
}

bool ChkPerfect(int iNumber)
{
    int iResult = 0;

    iResult = SumFactors(iNumber);
    
    if(iResult == iNumber)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    int bRet = false;

    printf("Enter Number \n");
    scanf("%d",&iValue);

    
    bRet = ChkPerfect(iValue);
    
    if(bRet == true)
    {
        printf("%d is perfect number\n",iValue);
    }
    else
    {
        printf("%d is not perfect\n", iValue);
    }

    return 0;
}