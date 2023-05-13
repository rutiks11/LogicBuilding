#include<stdio.h>   // IO
#include<stdlib.h>  // Memory Management

int main()  //Entry Point Function
{
    int iSize = 0; // to store the size of array
    int *ptr = NULL;    //to store the address of array
    int iCnt = 0;       // loop Counter 
    
    // Step 1; Accept the number of elements from user
    printf("Enter Number Of elements\n");
    scanf("%d",&iSize);

    // Step 2: Allocate Memory Dynamically
    ptr = (int *)malloc(iSize * sizeof(int));

    
    // Step 3:Accept the Values from user
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

   return 0;        // Return success to OS
   
}