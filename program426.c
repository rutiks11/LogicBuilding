#include<stdio.h>

void DisplayI(int no)
{
    static int iCnt = 1;
    
    while (iCnt <= no)
    {
        printf("%d\t",iCnt);
        iCnt++;
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