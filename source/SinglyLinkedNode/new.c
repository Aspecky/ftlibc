/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtarrih <mtarrih@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 22:00:39 by mtarrih           #+#    #+#             */
/*   Updated: 2025/01/05 15:33:25 by mtarrih          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SinglyLinkedNode.h"
#include <stdlib.h>

t_slnode	*slnode_new(void *data)
{
	t_slnode	*node;

	node = malloc(sizeof(t_slnode));
	if (node)
	{
		node->data = data;
		node->next = 0;
	}
	return (node);
}
