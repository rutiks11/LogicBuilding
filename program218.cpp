#include <iostream>
using namespace std;

class Digits
{
    public:
        int iNo = 0;
    
    Digits(int X)
    {
        iNo = X;
    }

    int SumDigits()
    {
        int iDigit = 0;
        int iSum = 0;
        int iTemp  = iNo;
    
        while (iTemp != 0)
        {
            iDigit = iTemp % 10;
            iSum = iSum + iDigit;
            iTemp = iTemp / 10;
        }
        return iSum;
    }
};

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout << "Enter Number : " << "\n";
    cin >>iValue;   

    Digits dobj(iValue);

    iRet = dobj.SumDigits();
    cout << "Summation of Digits : " << iRet << "\n";
    
    return 0;
}
