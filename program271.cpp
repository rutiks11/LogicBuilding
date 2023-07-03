/////////////////////////////////////////////////////////////
//                         Stack                           //
/////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

typedef class node
{   
    public:
        int data;
        struct node *next;

    node(int value)
    {
        data = value;
        next = NULL;
    }

}NODE, *PNODE;

class Stack
{
    private:
        PNODE First;
        int iCount;

    public:
        Stack();

        void Push(int no);  // InsertLast
        int Pop();          // DeleteFirst
        void Display();     
        int Count();
};


Stack :: Stack()
{
    First = NULL;
    iCount = 0;
};

void  Stack :: Push(int no)  // InsertLast
{
    PNODE newn = new NODE(no);

    if(First == NULL)
    {
        First = newn;
    }
    else
    {
        PNODE temp = First;

        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
    }
    iCount++;
}

int Stack :: Pop()       // DeleteFirst
{
    int iValue = 0;

    if(iCount == 0)
    {
        cout<< "Stack is empty\n";
        return -1;
    }
    else if(iCount == 1)
    {
        iValue = First->data;
        delete First;
        First = NULL;
    }
    else
    {
        PNODE temp = First;

        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }
        
        iValue = temp->next->data;
        delete temp->next;
        temp->next = NULL;
    }

    iCount--;
    return iValue;
}

void Stack :: Display()     
{
    if(First == NULL)
    {
        cout << "Nothing to display\n";
        return;
    }

    cout << "Elements of stack are : \n";

    PNODE temp = First;

    for(int iCnt = 1; iCnt <= iCount; iCnt++)
    {
        cout << temp->data << "\n";
        temp = temp->next;
    }
}

int Stack :: Count()
{
    return iCount;
}

int main()
{
    int iChoice = 1;
    int iValue = 0;
    int iRet = 0;

    Stack obj;

    cout << "--------------------------------------------\n";
    cout << "Dynamic Implementation of stack\n";
    cout << "--------------------------------------------\n";
    
    while (iChoice != 0)
    {      
        cout << "--------------------------------------------\n";
        cout<<"1 : Push element into stack "<<"\n";
        cout<<"2 : Pop element from stack "<<"\n";
        cout<<"3 : Display elements from stack "<<"\n";
        cout<<"4 : Count number of elements "<<"\n";
        cout<<"0 : Termination the application" <<"\n";
        cout << "--------------------------------------------\n";

        cout << "Please enter the option : \n";
        cin >> iChoice;

        switch (iChoice)
        {
        case 1:
            cout << "Enter the element that you want to push\n";
            cin >> iValue;
            obj.Push(iValue);
            break;

        case 2:
            iRet = obj.Pop();
            if(iRet != -1)
            {
                cout << "Poped element from stack is "<< iRet <<"\n";
            }
            break;
        
        case 3:
            obj.Display();
            break;
        
        case 4:
            iRet = obj.Count();
            cout << "Number of elements are : " << iRet << "\n";
            break;

        case 0:
            cout << "Thank You for using the application\n";
            break;

        default:
            cout << "Please enter valid option\n";
            break;
        // End of Switch Case
        }
    }   // End of While

    return 0;
    // End of main
}