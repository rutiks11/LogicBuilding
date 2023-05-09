//  normal loop 

#include <stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    //    1         2           3
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t",iCnt);
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
