// Sum of factors with updator

#include <stdio.h>

int SumFactors(int iNo)
{
    int iCnt = 0;
    int iSum  = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
    {
        if((iNo%iCnt) == 0)
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;
}

int main()
{
    int iValue = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    int iRet = 0;

    iRet = SumFactors(iValue);
    printf("Summation of Factors is :: %d\n", iRet);
    
    return 0;
}

