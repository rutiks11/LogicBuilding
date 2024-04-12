// 6785
// 5    8   7   6

#include<stdio.h>

int SumI(int no)
{
    int iDigit = 0;
    int iSum = 0;

    if(no !=0)
    {
        iDigit = no % 10;
        iSum = iSum + iDigit;
        no =no /10;
    }

    return iSum;
}

int main()
{
    int iValue =0;

    printf("Enter the number of elements : \n");
    scanf("%d",&iValue);

    int iRet = SumI(iValue);
    

    return 0;
}