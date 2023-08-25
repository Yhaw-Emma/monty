#include "monty.h"

/**
 *  * pop_element - prints the top
 *   * @head: stack head
 *    * @line_element: line_number
 *     * Return: 0 for success
 */

int pop_element(stack_t **head, unsigned int line_element)
{
	stack_t *h;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		free_error(void);
	}

	h = *head;
	*head = h->next;
	free(h);
	return (0);
}
