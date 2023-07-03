// Accept number and check whether Given number 3rd bit is on or off
// Mask Designing

#include<iostream>
using namespace std;

typedef unsigned int UINT;

bool ChkBit(UINT iNo)
{
    UINT iMask = 0X4;
    UINT iResult = 0;

    iResult = iNo & iMask;

    if(iResult == iMask)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue =0;
    bool bRet = false;

    cout << "Enter Number\n";
    cin>> iValue;

    bRet = ChkBit(iValue);
    if(bRet == true)
    {
        cout << "3rd bit is ON\n";
    }    
    else
    {
        cout << "3rd Bit is OFF\n";
    }
    return 0;
}