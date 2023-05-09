// Display 1 to 5

#include <stdio.h>      // For printf scanf 

void Display()
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= 5; iCnt++)
    {
        printf("%d\n", iCnt);
    }
}
/////////////////////////////////////////////////////////////////////////
//  Entry Point Function
/////////////////////////////////////////////////////////////////////////

int main()
{   
    Display();
    return 0;

}