// Write a program which checks whether number is Divisible by 3 and 5

#include <stdio.h>      // For printf scanf 
#include <stdbool.h>    // For bool data type

//////////////////////////////////////////////////////////////////////////
//  
//  Function Name:   CheckDivision
//  Input:           Integer
//  Output:          Boolean
//  Description:     Checks whether input is divible by 3 and 5
//  Author:          Rutik Rajendra Shinde 
//  Date:            25/04/2023
//  Update Date:     26/04/2023  
//
//////////////////////////////////////////////////////////////////////////

bool CheckDivisible(int iNo)
{
    if(((iNo % 3) == 0) && ((iNo % 5) == 0))
    {
        return true;
    }
    else
    {
        return false;
    }
    // There should not be any user interaction in function
}

/////////////////////////////////////////////////////////////////////////
//  Entry Point Function
/////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;         // Variable to accept input
    bool iRet = 0;          // Variable to accept return Value 

    printf("Please Enter number to check whether number is divisible by 3 and 5 \n");
    scanf("%d",&iValue);

    iRet = CheckDivisible(iValue);      // Function Call

    if(iRet == true)        
    {
        printf("%d is divisible by 3 and 5.\n",iValue);
    }
    else
    {
        printf("%d is not completely divisible by 3 and 5.\n",iValue);
    }
}

