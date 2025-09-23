/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_get.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtarrih <mtarrih@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 15:17:47 by mtarrih           #+#    #+#             */
/*   Updated: 2025/09/23 18:32:12 by mtarrih          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Vector.h"

void	*vector_get(t_vector *vector, size_t index)
{
	char	*arr;

	if (index >= vector->size)
		return (0);
	arr = vector->arr;
	return (arr + (index * vector->cell_size));
}
