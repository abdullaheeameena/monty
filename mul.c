#include "monty.h"
/**
 * f_mul - multipliestwo elemments of a stack
 * @head: stack head
 * @counter: line counter
 * Return: nothing
*/
void f_mul(stack_t **head, unsigned int counter)
{
	stack_t *p;
	int l = 0;
	int temp;

	p = *head;
	while (p)
	{
		l++;
		p = p->next;
	}
	if (l < 2)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	p = *head;
	temp = p->next->n * p->n;
	p->next->n = temp;
	*head = p->next;
	free(p);
}
