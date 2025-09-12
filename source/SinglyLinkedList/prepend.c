/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prepend.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtarrih <mtarrih@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 22:00:39 by mtarrih           #+#    #+#             */
/*   Updated: 2025/01/11 20:17:14 by mtarrih          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SinglyLinkedList.h"

t_slnode	*sllist_prepend(t_sllist *list, void *data)
{
	t_slnode	*node;

	node = slnode_new(data);
	if (node)
	{
		node->next = list->head;
		list->head = node;
		if (!list->tail)
			list->tail = node;
		list->size += 1;
	}
	return (node);
}
