#ifndef _STACK
#define _STACK
#include <stdio.h>
#include <list>
#include <limits.h>

typedef unsigned size_t;
/// <summary>
/// The struct describes an item in a stack, as an item in a linked list.
/// </summary>
typedef struct Node_t
{
    int value;
    struct Node *next;
}Node;

/// <summary>
/// The struct describes a stack as a pointer to an item in a linked list.
/// </summary>
typedef struct Stack_t
{
    Node* head;
    int stackSize;
}Stack;

/// <summary>
/// Create a stack.
/// </summary>
/// <returns>Pointer to the created stack</returns>
Stack* CreateStack() {}

/// <summary>
/// Delete a stack.
/// </summary>
/// <param name="stack">Pointer to the stack that needs to be deleted</param>
void DeleteStack(Stack* stack) {}

/// <summary>
/// Inserts an item into the stack.
/// </summary>
/// <param name="stack"></param>
/// <param name="item"></param>
void StackPush(Stack* stack, Node* item) {}

/// <summary>
/// Removes an item from the stack.
/// </summary>
/// <param name="stack"></param>
void StackPop(Stack* stack) {}

/// <summary>
/// 
/// </summary>
/// <param name="stack"></param>
/// <returns></returns>
int StackGetLastError(Stack* stack) {}

#endif _STACK
