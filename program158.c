// Write a program to accept String

#include <stdio.h>

int main()
{
    char Arr[10];

    printf("Enter String \n");
    scanf("%[^'\n']s",Arr);

    printf("Your name is %s\n",Arr);

    return 0;
}
