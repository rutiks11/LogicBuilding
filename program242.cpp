// Accept number and take 2 Bit position check whether bit is on or off
// Mask Designing

#include<iostream>
using namespace std;

typedef unsigned int UINT;

bool ChkBit(UINT iNo, UINT iPos1,UINT iPos2)
{
    UINT iMask1 = 0X00000001;
    UINT iMask2 = 0X00000001;

    
    UINT iResult = 0;

    if((iPos1 < 1) || (iPos1 >32) && (iPos2 < 1) || (iPos2 >32))
    {
        cout << "Invalid Position" << "\n";
        return false;
    }
    
    iMask1 = iMask1 << (iPos1 -1);    
    iMask2 = iMask2 << (iPos2 -1);

    iResult = iNo & (iMask1 | iMask2);

    if(iResult == (iMask1 | iMask2))
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
    int iBit1 = 0;
    int iBit2 = 0;

    bool bRet = false;

    cout << "Enter Number\n";
    cin>> iValue1;

    
    cout << "Enter bit position 1 (Enter range Should be 1 to 32)\n";
    cin>> iBit1;

    cout << "Enter bit position 1 (Enter range Should be 1 to 32)\n";
    cin>> iBit2;

    bRet = ChkBit(iValue1,iBit1,iBit2);

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