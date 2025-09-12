/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SinglyLinkedNode.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtarrih <mtarrih@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 14:29:20 by mtarrih           #+#    #+#             */
/*   Updated: 2025/01/14 04:58:09 by mtarrih          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SINGLYLINKEDNODE_H
# define SINGLYLINKEDNODE_H

typedef struct s_slnode
{
	struct s_slnode		*next;
	void				*data;
}	t_slnode;

t_slnode	*slnode_new(void *data);
t_slnode	*slnode_last(t_slnode *head);

#endif
