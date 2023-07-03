// Accept Number from user in decimal format and hexadecimal

#include<iostream>
using namespace std;

void DisplayHexadecimal(int iNo)
{
    int iDigit = 0;

    cout << "Binary Conversion of Number :: \n ";
    while (iNo != 0)
    {
        iDigit = iNo % 16;
        cout<< iDigit;
        iNo = iNo / 16;
    }
    cout << "\n";
}

int main()
{
    int iValue = 0;
    
    cout << "Enter Number\n";
    cin >> iValue;

    DisplayHexadecimal(iValue);

    return 0;
}