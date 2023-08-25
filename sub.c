#include "monty.h"
/**
  *f_sub- sustration
  *@head: stack head
  *@counter: line counter
  *Return: no return
 */
void f_sub(stack_t **head, unsigned int counter)
{
	stack_t *temp;
	int s;
	int nodes;

	temp = *head;
	for (nodes = 0; temp != NULL; nodes++)
		temp = temp->next;
	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	temp = *head;
	s = temp->next->n - temp->n;
	temp->next->n = s;
	*head = temp->next;
	free(temp);
}
