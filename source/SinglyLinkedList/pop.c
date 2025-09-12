/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pop.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtarrih <mtarrih@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 05:17:24 by mtarrih           #+#    #+#             */
/*   Updated: 2025/03/27 05:47:04 by mtarrih          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SinglyLinkedList.h"

t_slnode	*sllist_pop(t_sllist *list, t_slnode *node)
{
	t_slnode	*head;
	t_slnode	*next;
	t_slnode	*prev;

	head = list->head;
	if (node == head)
		list->head = head->next;
	prev = 0;
	while (head)
	{
		next = head->next;
		if (next == node)
		{
			prev = head;
			break ;
		}
		head = next;
	}
	if (node == list->tail)
		list->tail = prev;
	if (prev)
		prev->next = node->next;
	return (prev);
}
