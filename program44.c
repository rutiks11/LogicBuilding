//  normal loop 

#include <stdio.h>

void DisplayB(int iNo)
{
    int iCnt = 0; 
    
    iCnt = iNo;
    
    while (iCnt >= 1)
    {   
        printf("%d",iCnt);
        iCnt--;
    }
    
}

//////////////////////////////////////////////////////
// Entry Point Function 
//////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter Number \n");
    scanf("%d",&iValue);

   
    DisplayB(iValue);
    return 0;
}
