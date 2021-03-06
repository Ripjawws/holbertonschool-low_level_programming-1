#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 *add_node - add a node at the head of the list
 *@head: head element
 *@str: string
 *Return: new node
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *new = malloc(sizeof(list_t));
unsigned int counter;
if (new == NULL)
	return (NULL);
counter = 0;
while (str[counter] != '\0')
{
	counter++;
	}
new->len = counter;
new->str = strdup(str);
new->next = (*head);
(*head) = new;
return (*head);
}
