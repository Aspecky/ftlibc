/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtarrih <mtarrih@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 13:48:49 by mtarrih           #+#    #+#             */
/*   Updated: 2025/01/16 09:14:26 by mtarrih          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdlib.h"

static size_t	calc_num_width(unsigned int n)
{
	size_t	width;

	width = 1;
	while (n / 10 != 0)
	{
		width++;
		n /= 10;
	}
	return (width);
}

char	*utoa(unsigned int n, int sign)
{
	char	*str;
	size_t	len;

	len = calc_num_width(n);
	if (sign == -1)
		len += 1;
	str = malloc(sizeof(char) * (len + 1));
	if (str)
	{
		str[len] = 0;
		while (len-- != 0)
		{
			str[len] = (char)(n % 10 + '0');
			n /= 10;
		}
		if (sign == -1)
			str[0] = '-';
	}
	return (str);
}

char	*ft_itoa(int n)
{
	unsigned int	nabs;
	int				sign;

	nabs = (unsigned int)n;
	sign = 1;
	if (n < 0)
	{
		nabs = ~0u - nabs + 1;
		sign = -1;
	}
	return (utoa(nabs, sign));
}
