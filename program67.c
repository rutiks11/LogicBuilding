// accept number and print Minimum digit

#include <stdio.h>

float MinimumDigit(int iNo)
{   
  
    int iDigit = 0;
    int iMin = 9;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        
        if(iDigit < iMin)
        {
            iMin = iDigit;
        }
        
        if(iMin == 0)
        {
            break;
        }

        iNo = iNo / 10;
    }

    return iMin;

}

int main()
{
    int iValue =0;
    int iRet = 0.0f;

    printf("Enter Number\n");
    scanf("%d", &iValue);

    iRet = MinimumDigit(iValue);

    printf("Smallest Digit is %d",iRet);
    
    return 0;
}