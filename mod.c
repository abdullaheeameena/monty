#include "monty.h"
/**
 * f_mod - computes the rest
 * @head: stack head
 * @counter: linecounter
 * Return: nothinh
*/
void f_mod(stack_t **head, unsigned int counter)
{
	stack_t *x;
	int l = 0;
	int temp;

	x = *head;
	while (x)
	{
		x = x->next;
		l++;
	}
	if (l < 2)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	x = *head;
	if (x->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	temp = x->next->n % x->n;
	x->next->n = temp;
	*head = x->next;
	free(x);
}
