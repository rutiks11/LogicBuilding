// Write a program to accept n number and accept element for search and return its last occurence index
// trvel from last - Optimise code

#include <stdio.h>
#include <stdlib.h>

#define ERR_NOTFOUND -1     // User define macro

int SearchLastOccurence(int Arr[], int iLength, int iSearch)
{
   int iCnt = 0;
    
   for(iCnt = (iLength-1) ; iCnt >= 0; iCnt--)
   {
    if(Arr[iCnt] == iSearch)
    {   
        break;
    }
   }

    return iCnt;
}

int main()
{
    int iSize = 0;
    int *ptr = NULL;
    int iCnt = 0;
    int iValue = 0;
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

    
    printf("Enter the Element that You want to Search\n");
    scanf("%d",&iValue);

    iRet = SearchLastOccurence(ptr,iSize,iValue);

    if(iRet == ERR_NOTFOUND)
    {
        printf("There is No such Element\n");
    }
    else
    {
        printf("%d is at index %d",iValue, iRet);
    }

    free(ptr);

    return 0;
}