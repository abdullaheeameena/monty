#include "monty.h"
/**
 * f_swap - adds  two elements of a stack
 * @head: stack head
 * @counter: line counter
 * Return: nothing
*/
void f_swap(stack_t **head, unsigned int counter)
{
	stack_t *d;
	int l = 0;
	int temp;

	d = *head;
	while (d)
	{
		l++;
		d = d->next;
	}
	if (l < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	d = *head;
	temp = d->n;
	d->n = d->next->n;
	d->next->n = temp;
}
