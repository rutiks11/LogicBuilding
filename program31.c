// Write a program to accept number and check (bool) whether number is prime or not 

#include <stdio.h>
#include <stdbool.h>

//////////////////////////////////////////////////////////////////////////////////////
//  
//  Funciton Name : ChkPrime 
//  Intput        : integer
//  Output        : boolean
//  Author        : Rutik Rajendra Shinde
//  Description   : Accept number and check (bool) whether number is prime or not
//  Date          : 03/05/2023
//
//////////////////////////////////////////////////////////////////////////////////////

bool ChkPrime(int iNo)
{   
    int iCnt = 0;

    for(iCnt = 2; iCnt<=(iNo/2) ; iCnt++)
    {
        if((iNo%iCnt) == 0)
        {
            break;              // loop madhe return nahi lihaychaa
        }
    }

    if(iCnt == ((iNo/2)+1))
    {
        return true;
    }
    else
    {
        return false;
    }
}

/////////////////////////////////////////////////////
// Entry Point Function 
//////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    bool bRet = false;      // false manje 0

    printf("Enter Number to check prime or not :: \n");
    scanf("%d", &iValue);

    bRet = ChkPrime(iValue);

    if(bRet == true)
    {
        printf("%d is prime Number\n",iValue);
    }
    else
    {
        printf("%d is not prime number\n",iValue);
    }

    return 0;
}