/*
    Data Structures
*/

#include<stdio.h>
#include<stdlib.h>

// Structure Declaration - Memory Not allocated
struct Node
{
    int iNo;
    struct Node *next;
};

typedef struct Node NODE;
typedef struct Node *PNODE;
typedef struct Node **PPNODE;

int main()
{
    PNODE First = NULL;
    
    return 0;
}
