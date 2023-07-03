/////////////////////////////////////////////////////
//              Singly Circular LL // C++
/////////////////////////////////////////////////////

#include <iostream>
using namespace std;

typedef class node
{
    public: 
        int data;
        node *next;

    node(int value)
    {
        data = value;
        next = NULL;
    }

    node()
    {
        data = 0;
        next = NULL;
    }
}NODE, *PNODE;

class LinkedList
{
    public:
        PNODE First;
        int iCount;
    
    LinkedList()
    {
        First = NULL;
        iCount = 0;
    }

    virtual void InsertFirst(int ino) = 0;
    virtual void InsertLast(int ino) = 0;
    virtual void InsertAtPos(int ino, int iPos) = 0;
    
    virtual void DeleteFirst() = 0;
    virtual void DeleteLast() = 0;
    virtual void DeleteAtPos(int iPos) = 0;
    
    void Display()
    {
        PNODE temp = First;

        cout << "Elements of Linked List are : " << "\n";

        for(int iCnt =1; iCnt <= iCount; iCnt++)
        {   
            cout<<"| "<< temp-> data<<" |-> ";
            temp = temp -> next;
        }
        
        cout<<"NULL"<<"\n";
    }

    int Count()
    {
        return iCount;
    }
};

class SinglyCL : public LinkedList
{
    private:
        PNODE Last;

    public:
        SinglyCL();
        ~SinglyCL();

        void InsertFirst(int ino);
        void InsertLast(int ino);
        void InsertAtPos(int ino, int ipos);
        
        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int ipos);
};

SinglyCL :: SinglyCL()
{
    Last = NULL;
}

SinglyCL :: ~SinglyCL()
{
    cout<<"Inside destructor\n";
    PNODE temp = First;

    for(int iCnt = 1; iCnt <= iCount; iCnt++)
    {
        temp = First;
        First = First -> next;
        delete temp;
    }
}

void SinglyCL :: InsertFirst(int ino)
{
    PNODE newn = new NODE(ino);

    if(First ==  NULL && Last == NULL)
    {
        First = newn;
        Last = newn;
    }
    else
    {
        newn->next = First;
        First = newn;
    }
    Last->next = First;
    iCount++;
}

void SinglyCL ::InsertLast(int ino)
{
    PNODE newn = new NODE(ino);

    if(First ==  NULL && Last == NULL)
    {
        First = newn;
        Last = newn;
    }
    else
    {
        Last->next = newn;
        Last = Last->next;
    }

    Last->next = First;
    iCount++;
}

void SinglyCL :: InsertAtPos(int ino, int ipos)
{
    
    if((ipos <1) || (ipos > (iCount+1)))
    {
        cout << "Invalid Position " << "\n";
        return;
    }
    if(ipos == 1)
    {
        InsertFirst(ino);
    }
    else if(ipos == (iCount+1))
    {
        InsertLast(ino);
    }
    else
    {
        PNODE newn = new NODE(ino);
        PNODE temp = First;

        for(int iCnt = 1; iCnt < (ipos-1) ;iCnt++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        temp->next = newn;
        iCount++;
    }
}      
void SinglyCL :: DeleteFirst()
{
    if(First == NULL && Last == NULL)
    {
        return;
    }
    else if(First == Last)
    {
        delete First;
        First = NULL;
        Last = NULL;
    }
    else
    {
        First = First->next;
        free((Last)->next);
        Last->next = First;
    }
    iCount--;
}
void SinglyCL :: DeleteLast()
{
    if(First == NULL && Last == NULL)
    {
        return;
    }
    else if(First == Last)
    {
        delete First;
        First = NULL;
        Last = NULL;
    }
    else
    {
        PNODE temp = First;

        for(int iCnt=1; iCnt < (iCount-1); iCnt++)
        {
            temp= temp->next;
        }
        delete Last;
        Last = temp;
        Last->next = First;
    }
    iCount--;
}
void SinglyCL :: DeleteAtPos(int ipos)
{
    if((ipos <1) || (ipos > iCount))
    {
        cout << "Invalid Position " << "\n";
        return;
    }
    if(ipos == 1)
    {
        DeleteFirst();
    }
    else if(ipos == (iCount+1))
    {
        DeleteLast();
    }
    else
    {
        PNODE temp = First;

        for(int iCnt = 1; iCnt < (ipos-1) ;iCnt++)
        {
            temp = temp->next;
        }
        
        PNODE tempX = temp->next;

        temp->next = temp->next->next;
        delete tempX;
        
        iCount--;
    }
}

int main()
{
    SinglyCL obj;
    int iRet = 0;

    obj.InsertFirst(101);
    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(11);
    
    obj.Display();
    iRet = obj.Count();
    cout << "Number of elements in SinglyLL :: " << iRet <<"\n";

    obj.InsertLast(111);
    obj.InsertLast(151);
    obj.Display();
    
    iRet = obj.Count();
    cout << "Number of elements in SinglyLL :: " << iRet <<"\n";

    obj.DeleteFirst();
    obj.Display();

    
    iRet = obj.Count();
    cout << "Number of elements in SinglyLL :: " << iRet <<"\n";


    obj.DeleteLast();
    obj.Display();

    obj.InsertAtPos(11,4);
    obj.Display();

    obj.InsertAtPos(11,1);
    obj.Display();

    obj.DeleteAtPos(5);
    obj.Display();

    
    iRet = obj.Count();
    cout << "Number of elements in SinglyLL :: " << iRet <<"\n";

    return 0;
}