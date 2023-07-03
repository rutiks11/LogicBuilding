//////////////////////////////////////////////////////////////////
//                       Doubly Linear LL     
//////////////////////////////////////////////////////////////////


#include<iostream>
using namespace std;

typedef struct node
{
    int data;
    struct node *next;
    struct node *prev;
}NODE, *PNODE;
 
class DoublyLL
{
    private:
        int iCount;
        PNODE First;

    public:
        DoublyLL();
        ~DoublyLL();

        void InsertFirst(int no);
        void InsertLast(int no);
        void InsertAtPos(int no, int iPos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);

        void Display();
        int Count();
};


void DoublyLL :: InsertFirst(int no)
{
    PNODE newn = NULL;

    newn = new NODE;

    newn->next = NULL;
    newn->prev = NULL;
    newn->data = no;

    if(First == NULL)
    {
        First = newn;
    }
    else
    {
        First->prev = newn;
        newn->next = First;
        First = newn;
    }
    iCount++;
}

void DoublyLL :: InsertLast(int no)
{
    PNODE newn = NULL;

    newn = new NODE;

    newn->next = NULL;
    newn->prev = NULL;
    newn->data = no;

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
        newn->prev = temp;
    }
    iCount++;
}

void DoublyLL :: InsertAtPos(int iNo, int iPos)
{   
    if(iPos == 1)
    {
        InsertFirst(iNo);
    }
    else if(iPos == (iCount+1))
    {
        InsertLast(iNo);
    }
    else
    {
        PNODE temp = First;

        for(int iCnt = 1; iCnt < (iPos -1); iCnt++)
        {
            temp = temp->next;
        }

        PNODE newn = new NODE;

        newn->data = iNo;
        newn->next = NULL;
        newn->prev = NULL;

        newn->next = temp->next;
        temp->next->prev = newn;
        newn->prev = temp;
        temp->next = newn;
    }
    iCount++;
}

void DoublyLL :: DeleteFirst()
{   
    if(First == NULL)
    {
        return;
    }
    else if(First->next == NULL)
    {
        delete First;
        First = NULL;
    }
    else
    {
        First = First->next;
        delete First->prev;
        First->prev = NULL;
    }

    iCount--;
}

void DoublyLL :: DeleteLast()
{
    if(First == NULL)
    {
        return;
    }
    else if(First->next == NULL)
    {
        delete First;
        First = NULL;
    }
    else
    {
        PNODE temp = First;

        for (int iCnt = 1; iCnt < (iCount-1); iCnt++)
        {
            temp = temp->next;
        }

        delete temp->next;
        temp->next = NULL;        
    }
 
    iCount--;
}

void DoublyLL :: DeleteAtPos(int iPos)
{ 
    
    if(iPos == 1)
    {
        DeleteFirst();
    }
    else if(iPos == (iCount+1))
    {
        DeleteLast();
    }
    else
    {
        PNODE temp = First;

        for(int iCnt = 1; iCnt < (iPos -1); iCnt++)
        {
            temp = temp->next;
        }
        temp->next = temp->next->next;
        delete (temp->next->prev);
        temp->next->prev = temp;
    }
}

int DoublyLL :: Count()
{
    return iCount;
}

void DoublyLL :: Display()
{
    PNODE temp = First;

    cout << "Elements of Linked List are : " << "\n";

    
    cout << "NULL <=>";
    while (temp != NULL)
    {
        cout << " | " << temp->data << " | <=>";
        temp = temp->next;
    }
    cout << "NULL\n";
}

DoublyLL :: DoublyLL()
{
    cout<<"Inside Constructor\n";
    First = NULL;
    iCount = 0 ;
}


DoublyLL :: ~DoublyLL()
{
    PNODE temp = First;

    for(int iCnt =1; iCnt <= iCount; iCnt++)
    {
        temp = First;
        First = First->next;
        delete temp;
    }
    cout<<"Inside Destructor\n";
}

int main()
{
    DoublyLL obj;

    obj.InsertFirst(151);
    obj.InsertFirst(111);
    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(11);

    obj.Display();

    obj.InsertLast(201);    
    obj.Display();

    obj.DeleteFirst();
    obj.Display();

    obj.DeleteLast();
    obj.Display();

    obj.InsertAtPos(11,2);
    obj.Display();

    obj.DeleteAtPos(2);
    obj.Display();

    return 0;
}