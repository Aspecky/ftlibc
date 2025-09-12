/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   previous.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtarrih <mtarrih@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 05:03:59 by mtarrih           #+#    #+#             */
/*   Updated: 2025/03/27 05:10:36 by mtarrih          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SinglyLinkedNode.h"

t_slnode	*slnode_previous(t_slnode *head, t_slnode *node)
{
	t_slnode	*next;

	while (head)
	{
		next = head->next;
		if (next == node)
			return (head);
		head = next;
	}
	return (0);
}
