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

int Summation(PNODE Head)
{
    int iSum = 0;

    while (Head!=NULL)
    {
        iSum = iSum + (Head->data);
        Head = Head->next;
    }
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertAtFirst(&First,111);
    InsertAtFirst(&First,101);
    InsertAtFirst(&First,51);
    InsertAtFirst(&First,21);
    InsertAtFirst(&First,11);

    Display(First);

    iRet = Summation(First);
    printf(" Summation is : %d",iRet);
    return 0;
}