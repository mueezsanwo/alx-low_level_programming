#include "lists.h"
/**
 * delete_nodeint_at_index - to delete an specific node
 * @head: current node
 * @index: position to be removed
 * Return: always 0 (success)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current_node = NULL;
	listint_t *tmp_data = *head;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp_data);
		return (1);
	}

	while (i < index - 1)
	{
		if (tmp_data == NULL || tmp_data->next == NULL)
			return (-1);
		tmp_data = tmp_data->next;
		i++;
	}

	current_node = tmp_data->next;
	tmp_data->next = current_node->next;
	free(current_node);

	return (1);
}
