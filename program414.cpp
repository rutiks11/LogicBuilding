
#include<iostream>
using namespace std;

class ArrayX
{
    public:
        int *Arr;
        int Size;

    ArrayX(int length);
    
    void Accept();
    void Display();

};

ArrayX::ArrayX(int length)
{
    Size = length;
    Arr = new int[Size];
}

void ArrayX::Display()
{
    cout << "Elements of Array \n";
    int iCnt = 0;
    for(iCnt =0; iCnt < Size; iCnt++)
    {
        cout << Arr[iCnt] << "\n";
    }
}

    void ArrayX::Accept()
    {
        cout << "Enter the Elements of Array \n";
        int iCnt = 0;
        for(iCnt =0; iCnt < Size; iCnt++)
        {
            cin>>Arr[iCnt];
        }

    }

int main()
{       
    ArrayX obj(5);

    obj.Accept();
    obj.Display();
    
    return 0;
}