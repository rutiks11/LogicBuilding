// void Demo(int *Arr, int iLength)
// Write a program to accept array and return sum of array 

#include<stdio.h>   // IO
#include<stdlib.h>  // Memory Management

int Sum(int Arr[], int iLength)
{
    int iCnt = 0;
    int iSum = 0;   

    for(iCnt=0 ; iCnt<iLength ; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }
    return iSum;
}

int main()  //Entry Point Function
{
    int iSize = 0; // to store the size of array
    int *ptr = NULL;    //to store the address of array
    int iCnt = 0;       // loop Counter 
    int iRet = 0;

    // Step 1; Accept the number of elements from user
    printf("Enter Number Of elements\n");
    scanf("%d",&iSize);

    // Step 2: Allocate Memory Dynamically
    ptr = (int *)malloc(iSize * sizeof(int));

    // Step 3: Accept the Values from user
    printf("Enter the elements :\n");

    for(iCnt= 0;iCnt<iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    printf("Elements of array are :\n");
    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        printf("%d\n",ptr[iCnt]);
    }

    // Step 4 : Pass the array to the function
    iRet = Sum(ptr,iSize);
    printf("Sum %d",iRet);

    // Step 6 : Deallocate the Memory of array
    free(ptr);      // Tat uchlun thevne

    return 0;        // Return success to OS
}