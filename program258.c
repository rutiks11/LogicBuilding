// Data Structure - Singly Linear Linked List

#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

typedef struct Node NODE;
typedef struct Node *PNODE;
typedef struct Node **PPNODE;

void Display(PNODE Head)
{   
    printf("Elements of LinkList are :: \n");

    while (Head != NULL)
    {
        printf("| %d | -> ", Head->data);
        Head = Head->next;
    }
    printf("NULL\n");
}

int Count(PNODE Head)
{
    int iCount = 0;

    while (Head != NULL)
    {
        iCount++;
        Head= Head -> next;
    }

    return iCount;
}

// Allocate Memory for new Node
// Initialise the node
// Check whether LL is empty or not
// If LL is empty store the address of of newnode in first
// Otherwise store the addreess of newnode inside next pointer of old first node
// Update first Pointer with the address of new node

int InsertAtFirst(PPNODE Head, int No)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {       
        newn->next = *Head;
        *Head = newn;
    }
}

void InsertAtPos(PPNODE Head,int No,int iPos)
{
    int iLength = 0;
    int iCnt = 0;

    PNODE temp = *Head;

    iLength = Count(*Head);
    
    PNODE newn = NULL;

    // Filter
    if((iPos < 1) || (iPos > iLength))
    {
        printf("Invalid Position \n");
        return;
    }

    if(iPos == 1)
    {
        InsertAtFirst(Head,No);
    }
    else if(iPos == iLength)
    {
        InsertAtFirst(Head,No);
    }   
    else
    {
        newn = (PNODE)malloc(sizeof(NODE));

        newn->data = No;
        newn->next = NULL;

        for(iCnt= 1; iCnt < iPos-1; iCnt++)
        {
            temp = temp -> next;
        }

        // Sequence is Imporatant
        newn->next = temp->next;
        temp->next = newn;
    } 
}

void DeleteAtPos(PPNODE Head,int iPos)
{
    int iLength = 0;
    int iCnt = 0;
    
    PNODE temp = *Head;

    PNODE tempX = NULL;

    iLength = Count(*Head);

    // Filter
    if((iPos < 1) || (iPos > iLength + 1))
    {
        printf("Invalid Position \n");
        return;
    }

    if(iPos == 1)
    {
        DeleteAtFirst(Head);
    }
    else if(iPos == iLength+1)
    {
        DeleteAtLast(Head);
    }   
    else
    {
        for(iCnt =1; iCnt < iPos-1; iCnt++)
        {
            temp = temp->next;
        }

        tempX= temp->next;

        // Sequence is important
        temp->next = temp->next->next;
        free(tempX);

    } 
}

int InsertAtLast(PPNODE Head, int No)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    PNODE temp = *Head;

    newn->data = No;
    newn->next = NULL;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        while (temp -> next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
    }
}

void DeleteAtFirst(PPNODE Head)
{
    PNODE temp = *Head;
        
    if(*Head == NULL)   // LL is empty
    {
        return;
    }
    else if ((*Head) -> next == NULL)   // LL contains 1 Node
    {
        free(*Head);
        *Head = NULL;
    }   
    else        // LL contains more than one node 
    {
        *Head = (*Head) -> next;
        free(temp);    
    }
}

void DeleteAtLast(PPNODE Head)
{
    PNODE temp = *Head;

    if(*Head == NULL)   // LL is empty
    {
        return;
    }
    else if ((*Head) -> next == NULL)   // LL contains 1 Node
    {
        free(*Head);
        *Head = NULL;
    }   
    else        // LL contains more than one node 
    {
        while (temp->next->next != NULL) // Type-3 (while loop)
        {
            temp = temp ->next;
        }   

        free(temp->next);
        temp->next = NULL;
    }
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertAtLast(&First,11);
    InsertAtLast(&First,21);
    InsertAtLast(&First,51);
    InsertAtLast(&First,101);
    
    Display(First);

    iRet = Count(First);
    printf("Number of nodes are : %d\n", iRet);
    
    InsertAtFirst(&First,10);
    InsertAtFirst(&First,20);

    Display(First);

    iRet = Count(First);
    printf("Number of nodes are : %d \n",iRet);

    InsertAtPos(&First,25,5);

    Display(First);

    DeleteAtFirst(&First);
    DeleteAtFirst(&First);
    
    Display(First);

    iRet = Count(First);
    printf("Number of nodes are : %d \n",iRet);

    DeleteAtLast(&First);
    DeleteAtPos(&First,2);

    Display(First);

    iRet = Count(First);
    printf("Number of nodes are : %d \n",iRet);

    return 0;
}