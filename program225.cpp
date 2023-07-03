// Accept Number from user in decimal format and convert it into zero

#include<iostream>
using namespace std;

void Display(int iNo)
{
    int iDigit = 0;

    cout << "Binary Conversion of Number :: \n ";
    while (iNo != 0)
    {
        iDigit = iNo %2;
        cout<< iDigit;
        iNo = iNo / 2;
    }
    cout << "\n";
}

int main()
{
    int iValue = 0;
    
    cout << "Enter Number\n";
    cin >> iValue;

    Display(iValue);

    return 0;
}