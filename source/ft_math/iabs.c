/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iabs.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtarrih <mtarrih@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 15:49:24 by mtarrih           #+#    #+#             */
/*   Updated: 2025/01/08 15:50:38 by mtarrih          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"
#include <limits.h>

uintmax_t	iabs(intmax_t v)
{
	const intmax_t	mask = v >> (sizeof(intmax_t) * CHAR_BIT - 1);

	return ((uintmax_t)((v + mask) ^ mask));
}
