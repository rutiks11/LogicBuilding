// Display 1 to 5

#include <stdio.h>      // For printf scanf 

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\n", iCnt);
    }
}

/////////////////////////////////////////////////////////////////////////
//  Entry Point Function
/////////////////////////////////////////////////////////////////////////

int main()
{   
    int iValue = 0;

    printf("Enter the Frequency :");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;

}