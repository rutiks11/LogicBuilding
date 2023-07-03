// Write a program to accept String 
// Replace capital letter with *
// Small letters with $

#include <stdio.h>

void EditString(char *str)
{
    int iSmallCount = 0;
    int iCapitalCount = 0;

    while (*str != '\0')
    {
        if((*str >= 'A')&& (*str <= 'Z'))
        {
            *str = '*'; 
        }
        else if((*str >= 'a')&& (*str <= 'z'))
        {
            *str = '$'; 
        }

        str++;
    }
}

int main()
{
    char Arr[20];

    printf("Enter String \n");
    scanf("%[^'\n']s",Arr);

    EditString(Arr);

    printf("String after editing is : %s\n",Arr);     

    return 0; 
}
