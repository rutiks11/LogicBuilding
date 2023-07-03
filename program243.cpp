// Accept number and take 2 Bit position check whether bit is on or off
// Mask Designing

#include<iostream>
using namespace std;

typedef unsigned int UINT;

int OffBit(UINT iNo)
{
    UINT iMask = 0X00000040;
    UINT iResult = 0;

    iResult = iNo & iMask;

    if(iResult == iMask)
    {
        return iNo ^ iMask;
    }
    else
    {
        return iNo;
    }
}

int main()
{
    UINT iValue1 =0;
    UINT iRet = 0;

    cout << "Enter Number\n";
    cin>> iValue1;

    iRet = OffBit(iValue1);
    cout << "Result is : " << iRet << "\n";

    return 0;
}