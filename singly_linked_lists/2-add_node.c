#include "lists.h"

/**
 * new_node - function
 * @str: const char ptr
 *
 * Return: list_t ptr
 */
list_t	*new_node(const char *str)
{
	list_t	*r;
	int		x;

	if (!str)
		return (0);
	r = (list_t *) malloc(sizeof(list_t));
	if (!r)
		return (0);
	for (x = 0; str[x]; x++)
		;
	r->len = x;
	r->str = strdup(str);
	r->next = 0;
	return (r);
}

/**
 * add_node - function
 * @head: list_t ptr ptr
 * @str: const char ptr
 *
 * Return: list_t ptr
 */
list_t	*add_node(list_t **head, const char *str)
{
	list_t	*r;
	list_t	*p;

	if (head == 0)
		return (0);
	r = new_node(str);
	if (*head == 0)
	{
		*head = r;
	}
	else
	{
		p = *head;
		*head = r;
		r->next = p;
	}
	return (r);
}
