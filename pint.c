#include "monty.h"
/**
 * f_pint - prints the top
 * @head: stack head
 * @counter: line counter
 * Return: nothing
*/
void f_pint(stack_t **head, unsigned int counter)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
		fclose(bus.file);
		free_stack(*head);
		free(bus.content);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
