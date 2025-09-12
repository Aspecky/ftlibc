/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_math.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtarrih <mtarrih@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 15:49:07 by mtarrih           #+#    #+#             */
/*   Updated: 2025/03/24 03:34:54 by mtarrih          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MATH_H
# define FT_MATH_H

# include <inttypes.h>
# include <stddef.h>

uintmax_t	iabs(intmax_t v);
uintmax_t	idiff(intmax_t x1, intmax_t x2);
char		isign(intmax_t x);

intmax_t	imin(intmax_t x, intmax_t y);
intmax_t	iminv(intmax_t *nums, size_t size);
intmax_t	iminl(int n, ...);

uintmax_t	umin(uintmax_t x, uintmax_t y);
uintmax_t	uminl(int n, ...);
uintmax_t	udiff(uintmax_t a, uintmax_t b);

uintmax_t	umax(uintmax_t x, uintmax_t y);

double		deg_to_rad(double deg);

#endif
