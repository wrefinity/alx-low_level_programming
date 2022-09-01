#include "lists.h"
/**
 *sum_dlistint - sums all element value of doubly link list
 *@head: double liked list
 *Return: int value of the sum
 */
int sum_dlistint(dlistint_t *head)
{
	int total = 0;

	if (head == NULL)
		return (total);
	while (head)
	{
		total = total + head->n;
		head = head->next;
	}
	return (total);
}
