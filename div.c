#include "monty.h"
/**
 * f_div - divides the top two element
 * @head: stack head
 * @counter: linecounter
 * Return: nothing
*/
void f_div(stack_t **head, unsigned int counter)
{
	stack_t *b;
	int l = 0;
	int temp;

	b = *head;
	while (b)
	{
		b = b->next;
		l++;
	}
	if (l < 2)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	b = *head;
	if (b->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	temp = b->next->n / b->n;
	b->next->n = temp;
	*head = b->next;
	free(b);
}
