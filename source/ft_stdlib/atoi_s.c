/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi_s.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtarrih <mtarrih@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 13:44:51 by mtarrih           #+#    #+#             */
/*   Updated: 2025/01/16 09:14:45 by mtarrih          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdlib.h"
#include <ft_ctype.h>
#include <limits.h>
#include <errno.h>

int	atoi_s(const char *str, int *rstatus)
{
	int	res;
	int	sign;
	int	dig;

	if (!*str)
		return (*rstatus = ECANCELED, 0);
	*rstatus = 0;
	res = 0;
	sign = 1;
	if (*str == '-')
		sign = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (ft_isdigit(*str))
	{
		dig = (*str - '0') * sign;
		if (res > INT_MAX / 10 || (res == INT_MAX / 10 && dig > INT_MAX % 10))
			return ((void)errno, *rstatus = ERANGE, INT_MAX);
		if (res < INT_MIN / 10 || (res == INT_MIN / 10 && dig < INT_MIN % 10))
			return ((void)errno, *rstatus = ERANGE, INT_MIN);
		((void)res, res = res * 10 + dig, str++);
	}
	if (*str)
		((void)errno, *rstatus = ENOTSUP);
	return (res);
}
