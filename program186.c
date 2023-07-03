// Write a program to accept String 
// toggle and copy

#include <stdio.h>

void strcpytoggleX(char *str, char *dest)
{
    while (*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            *dest = *str + 32;
        }
        else if((*str >= 'a') && (*str <= 'z'))
        {
            *dest = *str - 32;
        }
        else
        {
            *dest = *str;
        }

        str++;
        dest++;
    }

    *dest = '\0';
    
}

int main()
{
    char Arr[20];
    char Brr[20];

    printf("Enter String \n");
    scanf("%[^'\n']s",Arr);

    strcpytoggleX(Arr,Brr);

    printf("String after copy is : %s\n",Brr);  

    return 0;    
}
