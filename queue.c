#include "monty.h"
/**
 * f_queue - prints the top
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void f_queue(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	bus.lifi = 1;
}

/**
 * addqueue - add node to the tail stack
 * @n: new_value
 * @head: head of the stack
 * Return: no return
*/
void addqueue(stack_t **head, int n)
{
	stack_t *nnode;
	stack_t *temp;

	nnode = malloc(sizeof(stack_t));
	temp = *head;
	if (nnode == NULL)
	{
		printf("Error\n");
	}
	nnode->n = n;
	nnode->next = NULL;
	if (temp)
	{
		while (temp->next)
			temp = temp->next;
	}
	if (!temp)
	{
		*head = nnode;
		nnode->prev = NULL;
	}
	else
	{
		temp->next = nnode;
		nnode->prev = temp;
	}
}
