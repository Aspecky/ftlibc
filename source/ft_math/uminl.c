/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   uminl.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtarrih <mtarrih@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 02:23:00 by mtarrih           #+#    #+#             */
/*   Updated: 2025/01/14 05:05:45 by mtarrih          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"
#include <limits.h>
#include <stdarg.h>

uintmax_t	uminl(int n, ...)
{
	va_list		ap;
	uintmax_t	min;
	uintmax_t	temp;

	min = INTMAX_MAX;
	va_start(ap, n);
	while (n--)
	{
		temp = va_arg(ap, uintmax_t);
		if (temp < min)
			min = temp;
	}
	va_end(ap);
	return (min);
}
