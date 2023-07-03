
// Write a program accept n number and another number for search check whether it is present or not in the array 

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool Search(int Arr[], int iLength, int iSearch)
{
   int iCnt = 0;
    
   for(iCnt = 0; iCnt < iLength; iCnt++)
   {
    if(Arr[iCnt] == iSearch)
    {
        break;
    }
   }

   if(iCnt == iLength)
   {
    return false;
   } 
   else
   {
    return true;
   }
}

int main()
{
    int iSize = 0;
    int *ptr = NULL;
    int iCnt = 0;
    int iValue = 0;
    bool bRet = false;

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

    printf("Enter the Element that You want to Search\n");
    scanf("%d",&iValue);

    printf("Elements of Array are :\n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d\n",ptr[iCnt]);
    }

    bRet = Search(ptr,iSize,iValue);

    if(bRet == true)
    {
        printf("%d is present in array",iValue);
    }
    else
    {
        printf("%d is not present in the array",iValue);
    }

    free(ptr);

    return 0;
}