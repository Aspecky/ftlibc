/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtarrih <mtarrih@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 22:00:39 by mtarrih           #+#    #+#             */
/*   Updated: 2025/03/14 21:53:52 by mtarrih          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SinglyLinkedList.h"
#include <stdlib.h>

void	sllist_free(t_sllist *list, void (*del)(void *))
{
	if (!list)
		return ;
	sllist_clear(list, del);
	free(list);
}
