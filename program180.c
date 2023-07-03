// Write a program to accept String 
// Replace capital letter with small letter

#include <stdio.h>

void struprX(char *str)
{
    int iSmallCount = 0;
    int iCapitalCount = 0;

    while (*str != '\0')
    {
        if((*str >= 'a')&& (*str <= 'z'))
        {
            *str = *str - 32;
        }
        str++;
    }
}

int main()
{
    char Arr[20];

    printf("Enter String \n");
    scanf("%[^'\n']s",Arr);

    struprX(Arr);

    printf("String after editing is : %s\n",Arr);  

    return 0;    
}
