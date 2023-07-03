
// Write a program accept one number from user and print smallest and largest 

#include <stdio.h>
#include <stdlib.h>

void MinMax(int Arr[], int iLength)
{
    int iMin = Arr[0];
    int iMax = Arr[0];

    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(iMin > Arr[iCnt])
        {
            iMin = Arr[iCnt];
        }
    
        if(iMax < Arr[iCnt])
        {
            iMax = Arr[iCnt];
        }
    }
    
    printf("Smallest Number is %d\n",iMin);
    printf("Largest Number is %d\n",iMax);
    
}

int main()
{
    int iSize = 0;
    int *ptr = NULL;
    int iCnt = 0;

    // Step 1 : Accept Number of Elements
    printf("Enter the Number of Elements\n");
    scanf("%d",&iSize);

    // Step 2 : 
    ptr = (int *)malloc(sizeof(int) * iSize);

    if(ptr == NULL)
    {
        printf("Memory Not Allocated\n");
        return -1;
    }

    printf("Enter the Elements\n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);      // Consider ptr as array
    }

    printf("Elements of Array are :\n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d\n",ptr[iCnt]);
    }

    MinMax(ptr,iSize);

    free(ptr);

    return 0;
}