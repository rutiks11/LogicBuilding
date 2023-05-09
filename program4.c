#include<stdio.h>
/*
    Steps to create the application

    step 1 : Understand the problem statement 
    step 2 : Write the Algorithm
    step 3 : Decide the programming logic
    step 4 : write the program  
    step 5 : Test the written program

*/

// Write a program addition of two numbers

//////////////////////////////////////////////////////////////////
//      Function Name : Addition
//      Input         : Unsigned integer, Unsigned integer
//      Output        : Unsigned integer
//      Description   : Perform Addition of 2 numbers
//      Author        : Rutik Rajendra Shinde
//      Date          : 18/04/2023
//
////////////////////////////////////////////////////////////////////////////////////

unsigned int Addition(unsigned int iValue1,unsigned int iValue2)
{
    unsigned int iResult = 0;
    iResult = iValue1 + iValue2;
    return iResult;
}

//////////////////////////////////////////////////////////////////////////////////
//      Entry Point Function
///////////////////////////////////////////////////////////////////////////////////

int main()
{
    unsigned int iNo1 = 0 , iNo2 = 0 , iAns = 0;

    printf("Enter first number : \n");
    scanf("%d",&iNo1);

    
    printf("Enter first number : \n");
    scanf("%d",&iNo2);

    iAns = Addition(iNo1,iNo2);

    printf("Addition is : %d \n", iAns);

    return 0;   
}
