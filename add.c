#include "monty.h"
/**
 * f_add - adds the top two element..
 * @head: stack head
 * @counter: linecounter
 * Return: nothing
*/
void f_add(stack_t **head, unsigned int counter)
{
	stack_t *r;
	int l = 0, temp;

	r = *head;
	while (r)
	{
		r = r->next;
		l++;
	}
	if (l < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	r = *head;
	temp = r->n + r->next->n;
	r->next->n = temp;
	*head = r->next;
	free(r);
}
