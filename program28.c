// Write Program to Check perfect Number or not
// In one function

#include <stdio.h>
#include <stdbool.h>

bool ChkPerfect(int iNo)
{
    int iSum = 0;
    int iCnt = 0;

    for(iCnt = 1; iCnt <= (iNo/2) ; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iSum = iSum + iCnt;
        }
    }

    if(iSum == iNo)
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
    bool bRet = false;

    printf("Enter the Number\n");
    scanf("%d",&iValue);

    bRet = ChkPerfect(iValue);
    
    if(bRet ==  true)
    {
        printf("%d is a perfect number\n",iValue);
    }
    else
    {
        printf("%d is not perfect number\n",iValue);
    }

    return 0;
}


/*

 Which is better?
 from scratch above code is better

 but already we have SumFactors then pgm27
(Jast stack Frames create hotat for each function)

*/
