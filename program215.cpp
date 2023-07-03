
#include <iostream>
using namespace std;

class Array
{
    public:
        int iSize;
        int *Arr;
    
    Array(int iNo)
    {
        cout << "Inside Constructor\n";
        iSize = iNo;
        Arr = new int[iSize];
    }

    ~Array()
    {
        cout << "Inside Destructor\n";
        delete []Arr;
    }

    void Accept()
    {
        cout << "Inside Accept Method\n";

        cout << "Enter the Elements: \n";
        int iCnt = 0;
        
        for(iCnt = 0;iCnt <iSize; iCnt++)
        {
            cin>>Arr[iCnt];
        }
    }

    
    void Display()
    {
        cout << "Inside Display Method\n";
        cout << "Elements of Array are: \n";
        int iCnt = 0;
        
        for(iCnt = 0;iCnt <iSize; iCnt++)
        {
            cout << Arr[iCnt] <<"\n";
        }
    }

    int Summation()
    {
        cout << "Inside Summation\n";
        int iSum = 0;
        int iCnt = 0;
        
        for(iCnt = 0; iCnt<iSize;iCnt++)
        {
            iSum = iSum + Arr[iCnt];
        }
        return iSum;
    }


};

int main()
{
    cout << "Inside Main\n";

    int iNo = 0;
    int iRet = 0;

    cout << "Enter Number of Elements : \n";
    cin>>iNo;

    Array aobj(iNo);

    aobj.Accept();
    aobj.Display();
    
    iRet = aobj.Summation();
    cout << "Summation is : " << iRet << "\n";
    
    return 0;
}
