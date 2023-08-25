#include "monty.h"
/**
  *f_rotl- rotates the stack to the topelement
  *@head: stack head
  *@counter: linecounter
  *Return: nthing
 */
void f_rotl(stack_t **head,  __attribute__((unused)) unsigned int counter)
{
	stack_t *temp = *head, *alt;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	alt = (*head)->next;
	alt->prev = NULL;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = *head;
	(*head)->next = NULL;
	(*head)->prev = temp;
	(*head) = alt;
}
