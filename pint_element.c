#include "monty.h"

/**
 *  * pint_element - prints the top
 *   * @head: stack head
 *    * @line_number: line_number
 *     * Return: 0 for success
 */

int pint_element(stack_t **head, unsigned int line_number)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", line_number);
		free_error(void);
		printf("%d\n", (*head)->n);
	}
	return (0);
}
