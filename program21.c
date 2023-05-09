// Accept number from user and pass to function that display factors of that number

#include <stdio.h>
// standard input output header file

void DisplayFactors(int iNo)   
{   
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)
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


/*

iNo = 8;
-----------------
| iNo % 1 == 0  |
| iNo % 2 == 0  |
| iNo % 3 == 0  |
| iNo % 4 == 0  |
| iNo % 5 == 0  |
| iNo % 6 == 0  |
| iNo % 7 == 0  |
| iNo % 8 == 0  |
-----------------
*/