// Write a program to accept String 
// concate the string

#include <stdio.h>

void strncatX(char *src, char *dest,int iLength)
{   
    
    // 1 : travel till end of dest
    while (*dest != '\0')
    {
        dest++;
    }   

    // 2 : copy the data from src to dest 
    
    while(*src != '\0')
    {
        *dest = *src;
        dest++;
        src++;

        iLength--;

        if(iLength == 0)
        {
            break;
        }
    }

    // 3 : write '\0' at the end of dest    
    *dest = '\0';
    
}

int main()
{
    char Arr[50];
    char Brr[20] = "Demo";
    int iValue = 0;

    printf("Enter String \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the number of letters that you want to concat\n");
    scanf("%d",&iValue);
    
    strncatX(Arr,Brr,iValue);

    printf("String after copy is : %s\n",Brr);  

    return 0;    
}
