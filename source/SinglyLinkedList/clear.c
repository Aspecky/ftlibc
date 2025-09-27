/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clear.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtarrih <mtarrih@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 22:00:39 by mtarrih           #+#    #+#             */
/*   Updated: 2025/09/27 18:26:44 by mtarrih          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SinglyLinkedList.h"
#include <stdlib.h>

void	sllist_clear(t_sllist *list, void (*del)(void *))
{
	t_slnode	*head;
	t_slnode	*next;

	head = list->head;
	while (head)
	{
		next = head->next;
		if (del)
			del(head->data);
		free(head);
		head = next;
	}
	list->head = 0;
	list->tail = 0;
	list->size = 0;
}
