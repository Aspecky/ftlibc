/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pop.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtarrih <mtarrih@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 05:17:24 by mtarrih           #+#    #+#             */
/*   Updated: 2025/09/26 18:46:54 by mtarrih          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SinglyLinkedList.h"

t_slnode	*sllist_pop(t_sllist *list, t_slnode *node)
{
	t_slnode	*og_head;
	t_slnode	*og_tail;
	t_slnode	*prev;

	og_head = list->head;
	og_tail = list->tail;
	prev = slnode_previous(list->head, node);
	if (prev)
		prev->next = node->next;
	if (node == list->head)
		list->head = node->next;
	if (node == list->tail)
		list->tail = prev;
	if (prev || og_head != list->head || og_tail != list->tail)
		list->size--;
	return (prev);
}
