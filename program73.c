// Start problems on N Number

#include <stdio.h>      // printf scanf

int main()
{
    int Arr[5]; // Static Memory allocation for array
    int iCnt = 0;

    printf("Enter the elements:  \n");

    for(iCnt; iCnt<5; iCnt++)
    {
        scanf("%d",&Arr[iCnt]);
    }

    printf("Elements of array are: \n");

    for(iCnt=0; iCnt<5; iCnt++)
    {
        printf("%d\n",Arr[iCnt]);
    }

    return 0;
}