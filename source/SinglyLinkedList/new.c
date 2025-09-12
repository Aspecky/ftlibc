/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtarrih <mtarrih@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 22:00:39 by mtarrih           #+#    #+#             */
/*   Updated: 2025/01/05 14:38:24 by mtarrih          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SinglyLinkedList.h"
#include <stdlib.h>

t_sllist	*sllist_new(void)
{
	t_sllist	*list;

	list = malloc(sizeof(t_sllist));
	if (list)
	{
		list->head = 0;
		list->tail = 0;
		list->size = 0;
	}
	return (list);
}
