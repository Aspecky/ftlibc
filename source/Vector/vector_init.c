/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_init.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtarrih <mtarrih@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 01:21:17 by mtarrih           #+#    #+#             */
/*   Updated: 2025/09/23 19:38:17 by mtarrih          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Vector.h"
#include <stdlib.h>

bool	vector_init(t_vector *vector, size_t nmemb, size_t size)
{
	vector->cell_size = size;
	vector->capacity = nmemb;
	vector->size = nmemb;
	vector->arr = malloc(nmemb * size);
	return (vector->arr != 0);
}
