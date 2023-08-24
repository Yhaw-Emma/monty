#include "monty.h"

/**
 *   *free_error- nothing
 *   *Return: no return
 */

void free_error(void)
{
	fclose(console.file);
	free(console.content);
	free_stack(*head);
	exit(EXIT_FAILURE);
}
