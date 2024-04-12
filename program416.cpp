#include<iostream>
using namespace std;

template<class T>
class ArrayX
{
    public:
        T *Arr;
        int Size;

    ArrayX(int);
    ~ArrayX();
    
    void Accept();
    void Display();
    int Maximum();

};

template<class T>
ArrayX<T>::ArrayX(int length)
{
    Size = length;
    Arr = new T[Size];
}

template<class T>
void ArrayX<T>::Display()
{
    cout << "Elements of Array \n";
    int iCnt = 0;
    for(iCnt =0; iCnt < Size; iCnt++)
    {
        cout << Arr[iCnt] << "\n";
    }
}

template<class T>
void ArrayX<T>::Accept()
{
    cout << "Enter the Elements of Array \n";
    int iCnt = 0;
    for(iCnt =0; iCnt < Size; iCnt++)
    {
        cin>>Arr[iCnt];
    }

}


template<class T>
int ArrayX<T>::Maximum()
{
    int iCnt =0;
    T Max = Arr[0];

    for(iCnt =0; iCnt < Size; iCnt++)
    {
        if(Arr[iCnt] > Max)
        {
            Max = Arr[iCnt];
        }
    }
    return Max;
}

template<class T>
ArrayX<T>:: ~ArrayX()
{
    delete []Arr;
}

int main()
{       
    ArrayX<int> obj(5);
    
    int iRet = 0;

    obj.Accept();
    obj.Display();
    obj.Maximum();
    
    
    double dRet = 0;

    ArrayX<double> obj1(5);
    obj1.Accept();
    obj1.Display();
    dRet = obj1.Maximum();
    cout << "Maximum of Array " << dRet << "\n";
    
    float fRet = 0.0f;

    ArrayX<float> obj2(5);
    obj2.Accept();
    obj2.Display();
    fRet =obj2.Maximum();
    
    cout << "Maximum of Array " << fRet << "\n";
    
    char cRet = '\0';

    ArrayX<char> obj3(5);
    obj3.Accept();
    obj3.Display(); 
    cRet = obj3.Maximum();
    
    cout << "Maximum of Array " << cRet << "\n";

    return 0;
}