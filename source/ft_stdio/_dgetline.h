/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _dgetline.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtarrih <mtarrih@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 10:17:57 by mtarrih           #+#    #+#             */
/*   Updated: 2024/12/24 14:00:46 by mtarrih          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _DGETLINE_H
# define _DGETLINE_H

# include "ft_stdio.h"

# define BUFSIZE 8192

typedef struct s_buffer
{
	char	*buf;
	size_t	size;
}	t_buffer;

#endif
