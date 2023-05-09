// Accept number from user and pass to function that display factors of that number

#include <stdio.h>
// standard input output header file

void DisplayFactors(int iNo)   
{   
    int iCnt = 0;

    
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iNo%iCnt) == 0)
        {
            printf("%d\n",iCnt);
        }
    }
}

////////////////////////////////////////////////////////////////////
//   Entry Point Function
////////////////////////////////////////////////////////////////////

int main()
{   
    int iValue = 0;              // local variable

    printf("Enter number :: \n");   
    scanf("%d", &iValue);        // accept value :- address madhe value takaycha ahe

    DisplayFactors(iValue);
    
    return 0;
}
