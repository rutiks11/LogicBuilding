// Write a program to accept String
// Count Small letters And capital letters

#include <stdio.h>

void Frequency(char *str)
{
    int iSmallCount = 0;
    int iCapitalCount = 0;

    while (*str != '\0')
    {
        if((*str>= 'a') && (*str <= 'z'))
        {
            iSmallCount++;
        }
        else if((*str>= 'A') && (*str <= 'Z'))
        {
            iCapitalCount++;
        }
        str++;
    }

    printf("Small letter Count %d\n",iSmallCount);
    
    printf("Capital Letter Count %d\n",iCapitalCount);
}

int main()
{
    char Arr[10];

    printf("Enter String \n");
    scanf("%[^'\n']s",Arr);

    Frequency(Arr);
    
    return 0;
}
