#include "monty.h"
/**
 * swap_element - adds the top two elements of the stack.
 * @head: stack head
 * @line_number: line_number
 * Return: 0 for success
*/
int swap_element(stack_t **head, unsigned int line_number)
{
	stack_t *h;
	int len = 0, aux;

	h = *head;
	while (h)
	{
		h = h->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		free_error(void);
	}
	h = *head;
	aux = h->n;
	h->n = h->next->n;
	h->next->n = aux;
	return (0);
}
