/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   idiff.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtarrih <mtarrih@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 15:52:02 by mtarrih           #+#    #+#             */
/*   Updated: 2025/01/10 00:57:20 by mtarrih          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"
#include <stdint.h>

uintmax_t	idiff(intmax_t a, intmax_t b)
{
	intmax_t	tmp;
	uintmax_t	ua;
	uintmax_t	ub;

	if (a < b)
	{
		tmp = a;
		a = b;
		b = tmp;
	}
	ua = (uintmax_t)a;
	ub = (uintmax_t)b;
	return (ua - ub);
}
