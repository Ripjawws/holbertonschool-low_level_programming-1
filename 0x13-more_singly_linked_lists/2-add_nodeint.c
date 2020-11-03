#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 *add_nodeint - add a node at the head of the list
 *@head: head element
 *@n: number
 *Return: new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
       	new->n = n;
	new->next = (*head);
	(*head) = new;
	return (*head);
}
