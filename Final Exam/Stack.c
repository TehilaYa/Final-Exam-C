#include "Stack.h"

Stack* CreateStack() 
{
	Stack *stack = (Stack *)malloc(sizeof(Stack));
	stack->head->next = NULL;
	stack->stackSize = 0;
	return stack;
}



void DeleteStack(Stack *stack) 
{
	if (stack->head->next != NULL)
	{
		Node *last = stack->head;
		int count = stack->stackSize;
		while (count != 0)
		{
			while (last->next != NULL)
			{
				last = last->next;
			}
			last = NULL;
			last = stack->head;
			--count;
		}
		stack = NULL;
		stack->stackSize = 0;
	}
}

void StackPush(Stack *stack, Node *item)
{
	item->next = stack->head->next;
	stack->head->next = item;
	++stack->stackSize;
}

Node * StackPop(Stack *stack) 
{
	if (stack->head->next != NULL)
	{
		Node* item = stack->head->next;
	}
	stack->head = stack->head->next;
}

int StackGetLastError(Stack *stack) {}

size_t StackSize(Stack *stack) {}

void StackPrint(Stack *stack) {}
