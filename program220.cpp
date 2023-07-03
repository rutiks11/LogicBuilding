// Problems on Digits

#include <iostream>
using namespace std;

class Digits
{
    private:
        int iNo = 0;
    
    public:
        Digits(int X)
        {
            iNo = X;
        }
};

int main()
{
    int iValue = 0;

    cout << " Enter Number : " << "\n";
    cin >>iValue;   

    Digits dobj(iValue);

    return 0;
}
