// 6785
// 5    8   7   6

#include<stdio.h>

void DisplayI(int no)
{
    while (no !=0)
    {
        printf("%d\t",no%10);
        no = no / 10;
    }
}

int main()
{
    int iValue =0;

    printf("Enter the number of elements : \n");
    scanf("%d",&iValue);

    DisplayI(iValue);

    printf("End of main\n");

    return 0;
}