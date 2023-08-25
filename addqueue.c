#include "monty.h"

/**
 *  * addqueue - add node to the tail stack
 *   * @n: new_value
 *    * @head: head of the stack
 *     * Return: no return
 */

void addqueue(stack_t **head, int n)
{
	stack_t *new_node, *aux;
	
	aux = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
		printf("Empty");
	new_node->n = n;
	new_node->next = NULL;
	if (aux)
	{
		while (aux->next)
			aux = aux->next;
	}
	if (!aux)
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		aux->next = new_node;
		new_node->prev = aux;
	}
}
