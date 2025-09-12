/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   append.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtarrih <mtarrih@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 22:00:39 by mtarrih           #+#    #+#             */
/*   Updated: 2025/01/11 20:15:25 by mtarrih          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SinglyLinkedList.h"

t_slnode	*sllist_append(t_sllist *list, void *data)
{
	t_slnode	*node;

	node = slnode_new(data);
	if (node)
	{
		if (list->tail)
			list->tail->next = node;
		list->tail = node;
		if (!list->head)
			list->head = node;
		list->size += 1;
	}
	return (node);
}
