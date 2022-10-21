#include "lists.h"
/**
 * is_palindrome - this checks if a singly linked list is a palindrome
 * or not.
 * @head: this is the linked list
 * Return: returns 0 if it is not a palindrome, if it is a palindrome,
 * Returns 1.
 */
int is_palindrome(listint_t **head)
{
	listint_t *ini = *head;
	int i = 0, j = 0;
	int l[4096];

	if (head == NULL || *head == NULL)
		return (1);
	while (ini->next)
		ini = ini->next, i++;
	ini = *head;
	while (ini)
	{
		l[j] = ini->n;
		ini = ini->next;
		j++;
	}
	ini = *head;
	while (ini)
	{
		if (ini->n == l[i])
			ini = ini->next;
		else
			return (0);
		i--;
	}
	return (1);
}
