// Accept number and check whether Given number 4th AND 9th bit is on or off
// Mask Designing

#include<iostream>
using namespace std;

typedef unsigned int UINT;

bool ChkBit(UINT iNo)
{
    UINT iMask = 0X00000108;
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
        cout << "4th and 9th bit are ON\n";
    }    
    else
    {
        cout << "4th and 9th Bit is OFF\n";
    }
    return 0;
}