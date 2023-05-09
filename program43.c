//  normal loop 

#include <stdio.h>

void Display(int iNo)
{
    int iCnt = 1;
    
    while (iCnt <= iNo)
    {   
        printf("%d",iCnt);
        iCnt++;
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

   
    Display(iValue);
    return 0;
}
