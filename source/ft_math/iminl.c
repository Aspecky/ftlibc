/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iminl.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtarrih <mtarrih@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 02:23:00 by mtarrih           #+#    #+#             */
/*   Updated: 2025/01/14 04:56:54 by mtarrih          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"
#include <limits.h>
#include <stdarg.h>

intmax_t	iminl(int n, ...)
{
	va_list		ap;
	intmax_t	min;
	intmax_t	temp;

	min = INTMAX_MAX;
	va_start(ap, n);
	while (n--)
	{
		temp = va_arg(ap, intmax_t);
		if (temp < min)
			min = temp;
	}
	va_end(ap);
	return (min);
}
