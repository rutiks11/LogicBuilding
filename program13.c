// Display "Jay Ganesh" 5 times on screen

#include <stdio.h>      // For printf scanf 

void Display(int iNo)   // Function
{

    int iCnt = 0;

    if(iNo < 0) // Filter
    {
        printf("Please enter the Positive Number");
        return;
    }

    for (iCnt = 1 ; iCnt <= iNo ; iCnt++)
    {
        printf("Jay Ganesh...\n");       
    }

}

/////////////////////////////////////////////////////////////////////////
//  Entry Point Function
/////////////////////////////////////////////////////////////////////////

int main()
{   
    int iValue = 0;

    printf("Enter the Frequency for Jay Ganesh Statement ");
    scanf("%d",&iValue);

    Display(iValue);         // Function Call
    
    return 0;

}