// Display "Jay Ganesh" 5 times on screen

#include <stdio.h>      // For printf scanf 

void Display()   // Function
{
    int iCnt = 0;

    for (iCnt = 1 ; iCnt <= 5; iCnt++)
    {
        printf("Jay Ganesh...");       
    }

}



/////////////////////////////////////////////////////////////////////////
//  Entry Point Function
/////////////////////////////////////////////////////////////////////////

int main()
{
    Display();         // Function Call
    return 0;
}
