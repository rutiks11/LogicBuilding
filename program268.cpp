//////////////////////////////////////////////////////////////////
//                        Singly Linear LL     
//////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

typedef struct node
{
    int data;
    struct node *next;
}NODE, *PNODE, **PPNODE;

class SinglyLL
{
    private:
        PNODE First;       // Characteristics
        int iCount;        // Characteristics 
    
    public:
        
        SinglyLL();
        ~SinglyLL();
        
        void InsertFirst(int no);
        void InsertLast(int no);
        void InsertAtPos(int no, int iPos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);

        void Display();
        int Count();
};



//return_Value Class_Name :: Function_Name(Parameters_List)

void SinglyLL :: InsertFirst(int no)
{
    PNODE newn = NULL;

    newn = new NODE;
    
    newn->data = no;
    newn->next = NULL;

    if(First == NULL)  // LL is empty
    {
        First = newn;
    }
    else
    {
        newn->next = First;
        First = newn;
    }
    iCount++;
}

void SinglyLL :: InsertLast(int no)
{
    PNODE newn = NULL;
    int iCnt = 0;

    newn = new NODE;
    
    newn->data = no;
    newn->next = NULL;

    if(First == NULL)  // LL is empty
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

void SinglyLL :: InsertAtPos(int iNo, int iPos)
{
    if((iPos < 1) || (iPos > iCount+1))
    {
        cout << "Invalid Position\n";
        return;
    }

    if(iPos == 1)
    {
        InsertFirst(iNo);
    }
    else if (iPos == iCount +1)
    {
        InsertLast(iNo);
    }
    else
    {
    
    PNODE temp = First;

    for(int iCnt =1; iCnt < iPos-1; iCnt++)
    {
        temp = temp->next;
    }

    PNODE newn = new NODE;
    
    newn->data = iNo;
    newn->next = NULL;

    newn->next = temp->next;
    temp->next = newn;
    }
}

void SinglyLL :: DeleteFirst()
{

    if(First == NULL)   // Empty LL
    {
        return;
    }
    else if(First->next == NULL)
    {
        delete First;   // Free(First)
        First = NULL;
    }
    else    // More than one node in LL
    {
        PNODE temp = First;

        First = First->next;
        delete temp;
    }

    iCount--;
}

void SinglyLL :: DeleteLast()
{
    if(First == NULL)   // Empty LL
    {
        return;
    }
    else if(First->next == NULL)
    {
        delete First;   // Free(First)
        First = NULL;
    }
    else    // More than one node in LL
    {
        PNODE temp = First;

        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }

        delete temp->next;
        temp->next = NULL;
    }
    iCount--;
}

void SinglyLL :: DeleteAtPos(int iPos)
{
    if(iPos == 1)
    {
        DeleteFirst();
    }
    else if(iPos == iCount)
    {
        DeleteLast();
    }   
    else
    {
        PNODE temp = First;

        for(int iCnt = 1; iCnt < iPos-1; iCnt++)
        {
            temp = temp->next;
        }

        PNODE tempX = temp->next;

        temp->next = temp->next->next;
        delete tempX;

        iCount--;
    }
}

int SinglyLL :: Count()
{
    return iCount;
}

void SinglyLL :: Display()
{
    PNODE temp = First;
    
    cout << "Elements of Linked List are : " << "\n";

    while (temp != NULL)
    {
        cout << "| " << temp->data << " |->";
        temp = temp->next;
    }
    cout << "NULL" << "\n";
    
}

SinglyLL :: SinglyLL()
{
    cout<<"Inside Constructor\n";
    First = NULL;
    iCount = 0 ;
}


SinglyLL :: ~SinglyLL()
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
    SinglyLL obj;

    int iChoice = 0;
    int iValue = 0;
    int iPosition = 0;

    cout << "LinkedList Application\n";

    while(1)
    {
        cout << "----------------------------------------------\n";
        cout << "Please enter your choice : \n";

        cout << "1 : Insert node at First Position\n";
        cout << "2 : Insert node at Last Position\n";
        cout << "3 : Insert node at given Position\n";
        cout << "4 : Delete node at First Position\n";
        cout << "5 : Delete node at Last Position\n";
        cout << "6 : Delete node at given Position\n";
        cout << "7 : Display the elements of LinkedList \n";
        cout << "8 : Count number of nodes from LinkedList\n";
        cout << "9 : Terminate the code\n";

        cout << "----------------------------------------------\n";

        cin >> iChoice;

        switch (iChoice)
        {
        case 1:
            cout << "Enter the Value that you want to Insert \n";
            cin >> iValue;
            obj.InsertFirst(iValue);
            break;
        
        case 2:
            cout << "Enter the Value that you want to Insert \n";
            cin >> iValue;
            obj.InsertLast(iValue);
            break;
        
        
        case 3:
            cout << "Enter the Value that you want to Insert \n";
            cin >> iValue;
            
            cout << "Enter the Position\n";
            cin >> iPosition;
            
            obj.InsertAtPos(iValue,iPosition);
            break;

        case 4:
            obj.DeleteFirst();
            break;

        case 5:
            obj.DeleteLast();
            break;            
        
        case 6:
            cout << "Enter the Value that you want to Insert \n";
            cin >> iPosition;
            
            obj.DeleteAtPos(iPosition);
            break;            
        
        case 7:
            obj.Display();
            break;            
        
        case 8:
        cout << "Number of Elements are : " << obj.Count() << "\n";
            break;
        
        case 9:
            cout << "Thank you for using the Application\n";
            return 0;

        default:
            cout << "Invalid Choice\n";
            break;
        }
    }

    return 0;
}



