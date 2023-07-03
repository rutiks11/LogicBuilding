//  normal loop 
/*  
    Factorial
    iNo = 5;
    
    5!
    
    Factorial = 5 * 4 * 3 * 2 * 1   = 120

    Factorial = 1 * 2 * 3 * 4 * 5   = 120
*/

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
