// Data Structure

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

int InsertAtMiddle()
{

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

void DeleteAtFirst(PNODE Head, int No)
{
    
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertAtLast(&First,11);
    InsertAtLast(&First,21);
    InsertAtLast(&First,51);
    InsertAtLast(&First,111);
    
    Display(First);
    printf("Number of nodes are : %d\n", iRet);
    
    InsertAtFirst(&First,10);
    InsertAtFirst(&First,20);

    Display(First);

    iRet = Count(First);
    printf("Number of nodes are : %d \n",iRet);

    return 0;
}