/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SinglyLinkedList.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtarrih <mtarrih@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 14:29:20 by mtarrih           #+#    #+#             */
/*   Updated: 2025/03/27 05:46:49 by mtarrih          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SINGLYLINKEDLIST_H
# define SINGLYLINKEDLIST_H

# include <stddef.h>
# include "../SinglyLinkedNode/SinglyLinkedNode.h"

typedef struct s_sllist
{
	t_slnode	*head;
	t_slnode	*tail;
	size_t		size;
}	t_sllist;

t_sllist	*sllist_new(void);
t_slnode	*sllist_append(t_sllist *list, void *data);
t_slnode	*sllist_prepend(t_sllist *list, void *data);
t_slnode	*sllist_pop(t_sllist *list, t_slnode *node);
void		sllist_clear(t_sllist *list, void (*del)(void *));
void		sllist_free(t_sllist *list, void (*del)(void *));
void		sllist_splice(t_sllist *list1, t_sllist *list2);

#endif
