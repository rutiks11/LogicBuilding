// Write a program which accept marks and display class according to percentage

// 0  to 34 -> Fail
// 35 to 50 -> Pass class 
// 50 to 59 -> Second class
// 60 to 75 -> First class
// 75 to 100 -> First class with distinction

#include <stdio.h>      // For printf scanf 

//////////////////////////////////////////////////////////////////////////
//  
//  Function Name:   CheckDivision
//  Input:           Integer
//  Output:          Boolean
//  Description:     Take input and
//  Author:          Rutik Rajendra Shinde 
//  Date:            25/04/2023
//  Update Date:     26/04/2023  
//
//////////////////////////////////////////////////////////////////////////

void DisplayClass(float fMarks)
{   
    //Filter
    
    if ((fMarks < 0.0f ) || (fMarks > 100.00f))
    {
        printf("Invalid Input ");
        printf("Please Enter Percentage between 0.0 to 100.00 ");
    }
    
    if((fMarks>0.0f) && (fMarks<35.00f))
    {
        printf("You are Fail");
    }
    else if((fMarks >= 35.00f) && (fMarks < 50.00f))
    {
        printf("You got Pass Class");
    }
    else if((fMarks >= 50.00f) && (fMarks < 60.00f))
    {
        printf("You got Second Class");
    }
    else if((fMarks >= 60.00f) && (fMarks < 75.00f))
    {
        printf("You got First Class");
    }
    else if((fMarks >= 75.00f) && (fMarks < 100.00f))
    {
        printf("You got First Class with Destinction");
    }
    
    // There should not be any user interaction in function
}

/////////////////////////////////////////////////////////////////////////
//  Entry Point Function
/////////////////////////////////////////////////////////////////////////

int main()
{
    float iValue = 0;         // Variable to accept input

    printf("Please Enter your Percentage out of 100 \n");
    scanf("%f",&iValue);

    DisplayClass(iValue);

}

