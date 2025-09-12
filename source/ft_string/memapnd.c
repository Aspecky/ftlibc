/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memapnd.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtarrih <mtarrih@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 11:30:43 by mtarrih           #+#    #+#             */
/*   Updated: 2024/11/26 11:31:33 by mtarrih          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"
#include <stdlib.h>

char	*memapnd(char *ptr1, size_t size1, char *ptr2, size_t size2)
{
	char	*join;

	join = memjoin(ptr1, size1, ptr2, size2);
	free(ptr1);
	return (join);
}
