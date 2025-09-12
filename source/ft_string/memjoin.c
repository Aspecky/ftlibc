/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memjoin.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtarrih <mtarrih@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 11:30:43 by mtarrih           #+#    #+#             */
/*   Updated: 2024/11/26 11:31:23 by mtarrih          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"
#include <stdlib.h>

char	*memjoin(char *ptr1, size_t size1, char *ptr2, size_t size2)
{
	char	*join;

	join = malloc(size1 + size2);
	if (join)
	{
		ft_memcpy(join, ptr1, size1);
		ft_memcpy(join + size1, ptr2, size2);
	}
	return (join);
}
