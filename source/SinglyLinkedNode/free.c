/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtarrih <mtarrih@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 18:48:38 by mtarrih           #+#    #+#             */
/*   Updated: 2025/09/26 18:52:07 by mtarrih          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SinglyLinkedNode.h"
#include <stdlib.h>

void	slnode_free(t_slnode *node, void (*del)(void *))
{
	del(node->data);
	free(node);
}
