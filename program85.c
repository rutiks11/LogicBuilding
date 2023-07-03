
// Write a program accept one number from user return Largest element and smallest number from user in different function

#include <stdio.h>
#include <stdlib.h>

int Maximum(int Arr[], int iLength)
{
    int iMin = Arr[0];
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(iMin > Arr[iCnt])
        {
            iMin = Arr[iCnt];
        }
    }
    return iMin;
}

int Minimum(int Arr[], int iLength)
{
    int iMax = Arr[0];
    int iCnt = 0;

    for(iCnt = 1; iCnt < iLength; iCnt++)
    {
        if(iMax < Arr[iCnt])
        {
            iMax = Arr[iCnt];
        }
    }
    return iMax;
}

int main()
{
    int iSize = 0;
    int *ptr = NULL;
    int iCnt = 0;
    int iRet = 0;

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

    iRet = Minimum(ptr,iSize);
    printf("Minimum element is : %d",iRet);
    
    iRet = Maximum(ptr,iSize);
    printf("Maximum element is : %d",iRet);
    
    free(ptr);

    return 0;
}