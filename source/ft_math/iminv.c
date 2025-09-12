/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iminv.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtarrih <mtarrih@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 02:23:00 by mtarrih           #+#    #+#             */
/*   Updated: 2025/01/12 03:13:09 by mtarrih          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"
#include <limits.h>

intmax_t	iminv(intmax_t nums[], size_t size)
{
	intmax_t	min;

	min = INTMAX_MAX;
	while (size--)
	{
		if (*nums < min)
			min = *nums;
		nums++;
	}
	return (min);
}
