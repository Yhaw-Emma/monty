#include "monty.h"

/**
 * push_element - adds node to the stack
 * @head: the head of the stack
 * @line_number: number of the line
 * Return: 0 for success
 */

int push_element(stack_t **head, unsigned int line_number)
{
	if (!console.arg)
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		free_errors(void);
	}
	else
	{
		if (console.arg[0] == '-')
			i++;
		while (console.arg[i] != '\0')
		{
			if (console.arg[i] < 48 || console.arg[i] > 57)
				flag = 1;
		}
		if (flag == 1)
		{
			fprintf(stderr, "L%d: usage: push integer\n", line_number);
			free_errors(void);
		}
	}
	n = atoi(console.arg);
	if (console.change == 0)
		addnode(head, n);
	else
		addqueue(head, n);
	return (0);
}
