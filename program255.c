/*
    Data Structures
*/

#include<stdio.h>
#include<stdlib.h>

// Structure Declaration - Memory Not allocated
// Short Hand Syntax

typedef struct Node
{
    int iNo;
    struct Node *next;
}NODE, *PNODE, **PPNODE;

int main()
{
    PNODE First = NULL;    
    return 0;
}
