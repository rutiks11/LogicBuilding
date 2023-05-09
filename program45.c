//  normal loop 

#include <stdio.h>

int DisplayB(int iNo)
{
    int iCnt = 0; 
    
    iCnt = iNo;
    int iFact = 1;
    
    while (iCnt >= 1)
    {   
        iFact = iFact * iCnt;
        iCnt--;
    }
    return iFact;
    
}

//////////////////////////////////////////////////////
// Entry Point Function 
//////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number \n");
    scanf("%d",&iValue);

   
    iRet = DisplayB(iValue);
    printf("Factorial = %d",iRet);
    return 0;
}
