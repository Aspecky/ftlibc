/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtoimax.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtarrih <mtarrih@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 21:00:20 by mtarrih           #+#    #+#             */
/*   Updated: 2025/04/15 19:20:55 by mtarrih          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ctype.h"
#include "ft_string.h"
#include <errno.h>
#include <stdint.h>

static inline int	get_sign(const char **nptr)
{
	int	sign;

	sign = 1;
	if (**nptr == '-' || **nptr == '+')
	{
		if (**nptr == '-')
			sign = -1;
		(*nptr)++;
	}
	return (sign);
}

static inline char	*skip_spaces(const char *nptr)
{
	while (ft_isspace(*nptr))
		nptr++;
	return ((char *)nptr);
}

static inline intmax_t	check_overflow(intmax_t res, intmax_t dig, int base,
		int *rstatus)
{
	if (res > INTMAX_MAX / base || (res == INTMAX_MAX / base && dig > INTMAX_MAX
			% base))
	{
		*rstatus = ERANGE;
		return (INTMAX_MAX);
	}
	else if (res < INTMAX_MIN / base || (res == INTMAX_MIN / base
			&& dig < INTMAX_MIN % base))
	{
		*rstatus = ERANGE;
		return (INTMAX_MIN);
	}
	return (0);
}

static inline int	base_check(const char **nptr, int base, int *rstatus)
{
	const char	*ptr;

	ptr = *nptr;
	if (base == 0)
	{
		if (ptr[0] == '0')
		{
			ptr++;
			if (ptr[0] == 'x' || ptr[0] == 'X')
			{
				ptr++;
				base = 16;
			}
			else
				base = 8;
		}
	}
	if (base < 2 || base > 36)
		*rstatus = EINVAL;
	*nptr = ptr;
	return (base);
}

intmax_t	ft_strtoimax(const char *nptr, int base, int *rstatus)
{
	intmax_t	res;
	intmax_t	sign;
	intmax_t	dig;
	intmax_t	overflow_val;

	((void)res, *rstatus = 0, nptr = skip_spaces(nptr));
	base = base_check(&nptr, base, rstatus);
	if (*rstatus != 0)
		return (0);
	((void)res, sign = get_sign(&nptr), res = 0);
	while (1)
	{
		dig = chartodigit(*nptr, base);
		if (dig == -1)
			break ;
		dig *= sign;
		overflow_val = check_overflow(res, dig, base, rstatus);
		if (*rstatus == ERANGE)
			return (overflow_val);
		((void)res, res = res * base + dig, nptr++);
	}
	nptr = skip_spaces(nptr);
	if (*nptr != 0)
		((void)errno, *rstatus = EINVAL);
	return (res);
}
