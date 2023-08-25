#include "monty.h"
/**
 * addnode - add node 
 * @head: head of the stack
 * @n: value
 * Return: nithing
*/
void addnode(stack_t **head, int n)
{

	stack_t *nnode;
	stack_t *temp;

	temp = *head;
	nnode = malloc(sizeof(stack_t));
	if (nnode == NULL)
	{ printf("Error\n");
		exit(0); }
	if (temp)
		temp->prev = nnode;
	nnode->n = n;
	nnode->next = *head;
	nnode->prev = NULL;
	*head = nnode;
}
