#include "Stack.h"
 
int main(void)
{
	Stack* stack = CreateStack();
	Node *node1;
	node1->value = 10;
	StackPush(stack, node1);
	return 0;
};