/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_ilen.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynh <thuynh@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 09:02:57 by thuynh            #+#    #+#             */
/*   Updated: 2017/08/07 14:20:20 by thuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	*convert_ilen (char *lflag, int val)
{
	if (!ft_strcmp(lflag, "h"))
		return ((short)val);
	if (!ft_strcmp(lflag, "l"))
		return ((long)val);
	if (!ft_strcmp(lflag, "j"))
		return ((intmax_t)val);
	if (!ft_strcmp(lflag, "z"))
		return ((size_t)val);
	if (!ft_strcmp(lflag, "hh"))
		return ((signed char)val);
	if (!ft_strcmp(lflag, "ll"))
		return ((long long)val);
	return (val);
}
