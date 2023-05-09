// reverse loop

#include <stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    //    1         2           3
    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        printf("%d\t",iCnt);    // 4
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
