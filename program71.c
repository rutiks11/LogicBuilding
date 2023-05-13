// Start problems on N Number

#include <stdio.h>      // printf scanf
#include <stdlib.h>     // For malloc calloc

int main()
{
    int iSize = 0;
    int *ptr = NULL;

    printf("Enter Number of Element :");
    scanf("%d",&iSize);

    ptr = (int *)malloc(sizeof(int) * iSize); // malloc is use to allocate the memory dynamically
                                              // return value of malloc is void *                  
    if(ptr == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Memory allocated succesfully");
    return 0;
}