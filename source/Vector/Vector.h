/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Vector.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtarrih <mtarrih@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 01:20:27 by mtarrih           #+#    #+#             */
/*   Updated: 2025/09/23 18:34:53 by mtarrih          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTOR_H
# define VECTOR_H

# include <stddef.h>
# include <stdbool.h>

typedef struct s_vector
{
	size_t	cell_size;
	size_t	capacity;
	size_t	size;
	void	*arr;
}	t_vector;

bool	vector_init(t_vector *vector, size_t nmemb, size_t size);
bool	vector_set(t_vector *vector, size_t index, void *value);
void	*vector_get(t_vector *vector, size_t index);

#endif
