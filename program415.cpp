#include<iostream>
using namespace std;

template<class T>
class ArrayX
{
    public:
        T *Arr;
        int Size;

    ArrayX(int);
    
    void Accept();
    void Display();

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

int main()
{       
    ArrayX<int> obj(5);

    obj.Accept();
    obj.Display();
    

    ArrayX<double> obj1(5);
    obj.Accept();
    obj.Display();

    ArrayX<float> obj2(5);
    obj.Accept();
    obj.Display();
    

    ArrayX<char> obj3(5);
    obj.Accept();
    obj.Display(); 

    return 0;
}