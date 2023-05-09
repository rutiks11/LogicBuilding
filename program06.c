// Write a program which checks whether number is even or odd.

#include <stdio.h>      // For printf scanf 
#include <stdbool.h>    // For bool data type

//////////////////////////////////////////////////////////////////////////
//  
//  Function Name:   CheckEvenOdd
//  Input:           Integer
//  Output:          Boolean
//  Description:     Checks whether input is even or odd
//  Author:          Rutik Rajendra Shinde 
//  Date:            25/04/2023
//  Update Date:     26/04/2023  
//
//////////////////////////////////////////////////////////////////////////

bool CheckEvenOdd(int iNo)
{
    if((iNo%2) == 0) 
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
    int iValue = 0;                     // Variable to accept return value
    bool bRet = false;                  // Variable to Return value

    printf("Please enter number to check whether it is Even or Odd: \n");
    scanf("%d", &iValue);

    bRet = CheckEvenOdd(iValue);        //Function call

    if(bRet == true)
    {
        printf("%d is Even number\n", iValue);
    }
    else
    {
        printf("%d is Odd number\n", iValue);
    }

    return 0;
}

/*
    11 * 2  -> Multiplication 
    11 / 2  -> Division
    11 % 2  -> Reminder
*/