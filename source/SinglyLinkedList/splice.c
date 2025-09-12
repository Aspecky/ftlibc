/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   splice.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtarrih <mtarrih@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 22:00:39 by mtarrih           #+#    #+#             */
/*   Updated: 2025/01/07 01:25:55 by mtarrih          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SinglyLinkedList.h"
#include <stdlib.h>

void	sllist_splice(t_sllist *list1, t_sllist *list2)
{
	if (list1->tail)
		list1->tail->next = list2->head;
	list1->tail = list2->tail;
	if (!list1->head)
		list1->head = list2->head;
	free(list2);
}
