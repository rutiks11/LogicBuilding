// Accept number and take Bit position check whether bit is on or off
// Mask Designing

#include<iostream>
using namespace std;

typedef unsigned int UINT;

bool ChkBit(UINT iNo, UINT iPos)
{
    UINT iMask = 0X00000001;
    UINT iResult = 0;

    if((iPos < 1) || (iPos>32))
    {
        cout << "Invalid Position" << "\n";
        return false;
    }
    
    iMask = iMask << (iPos -1);
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
    int iValue1 =0;
    int iBit = 0;

    bool bRet = false;

    cout << "Enter Number\n";
    cin>> iValue1;

    
    cout << "Enter bit position (Enter range Should be 1 to 32)\n";
    cin>> iBit;

    bRet = ChkBit(iValue1,iBit);

    if(bRet == true)
    {
        cout << "Bit is On\n";
    }    
    else
    {
        cout << "Bit is Off\n";
    }
    return 0;
}