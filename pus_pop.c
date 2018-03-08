#include"stdio.h"
#define STACK_EMPTY 0
void push(char stack[],char item,int *top,int max_size)
{
	if (*top < max_size-1)
 	{
		++(*top);
		stack[*top] = item;
	}
}
char pop(char stack[],int *top)
{
	char item;
	if (*top >= 0)
	{
		item = stack[*top];
		--(*top);
	}	 
	else
	{
		item = STACK_EMPTY;
	}
	return (item);
}
main()
{
	int max,s_top=-1;
	int MAXSIZE;
	int ch;
	printf("Please enter the maximum size of stack\n");
	scanf("%d",&max);
	push(s, '77', &s_top, MAXSIZE);
	push(s, '97', &s_top, MAXSIZE);
	ch = pop(s,&s_top);
}
