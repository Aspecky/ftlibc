/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_set.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtarrih <mtarrih@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 15:17:47 by mtarrih           #+#    #+#             */
/*   Updated: 2025/09/23 19:39:03 by mtarrih          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Vector.h"
#include "ft_string.h"
#include <stdlib.h>

bool	vector_set(t_vector *vector, size_t index, void *value)
{
	unsigned char	*arr;
	size_t			new_capacity;

	if (index >= vector->capacity)
	{
		new_capacity = vector->capacity + 1;
		while (new_capacity <= index)
			new_capacity *= 2;
		arr = malloc(new_capacity * vector->cell_size);
		if (!arr)
			return (false);
		ft_memcpy(arr, vector->arr, vector->size * vector->cell_size);
		free(vector->arr);
		vector->arr = arr;
		vector->capacity = new_capacity;
	}
	if (index >= vector->size)
		vector->size = index + 1;
	arr = vector->arr;
	ft_memcpy(arr + (index * vector->cell_size), value, vector->cell_size);
	return (true);
}
