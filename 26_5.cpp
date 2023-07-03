// Write a program which checks whether 1st and last bit is On or Off.
// First bit means bumber 1 bit and last bit means bit number 32

#include<iostream>
using namespace std;

typedef unsigned long int UNIT;

bool ChkBit(UNIT iNo)
{
    UNIT iMask = 0X80000001;
    UNIT iResult = 0;

    iResult = iMask & iNo;

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
    UNIT iValue = 0;
    bool bRet = false;

    cout << "Enter Number \n";
    cin >> iValue;

    bRet = ChkBit(iValue);
    
    if(bRet == true)
    {
        cout << "1st and 32th bit is On";
    }
    else
    {
        cout << "1st and 32th bit is Off";
    }

    return 0;
}
