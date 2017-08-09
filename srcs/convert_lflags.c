/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_lflags.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynh <thuynh@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/08 11:00:03 by thuynh            #+#    #+#             */
/*   Updated: 2017/08/08 11:50:39 by thuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	convert_lflags(t_print **list)
{
	if (F == 'd' || F == 'i')
	{
		(*list)->val.z = !ft_strcmp(LO, "z") ? (size_t)L_INT : 0;
		(*list)->val.l_D = !ft_strcmp(LO, "l") ? (long)L_INT : 0;
		(*list)->val.h_int = !ft_strcmp(LO, "h") ? (short)L_INT : 0;
		(*list)->val.j_int = !ft_strcmp(LO, "j") ? (intmax_t)L_INT : 0;
		(*list)->val.hh_int = !ft_strcmp(LO, "hh") ? (signed char)L_INT : 0;
		(*list)->val.ll_int = !ft_strcmp(LO, "ll") ? (long long)L_INT : 0;
	}
	else if (F == 'u' || F == 'o' || F == 'x' || F == 'X')
	{
		(*list)->val.z = !ft_strcmp(LO, "z") ? (size_t)L_UINT : 0;
		(*list)->val.l_UO = !ft_strcmp(LO, "l") ? (unsigned long)L_UINT : 0;
		(*list)->val.h_uint = !ft_strcmp(LO, "h") ? (unsigned short)L_UINT : 0;
		(*list)->val.j_uint = !ft_strcmp(LO, "j") ? (uintmax_t)L_UINT : 0;
		(*list)->val.hh_uint = !ft_strcmp(LO, "hh") ? (unsigned char)L_UINT : 0;
		(*list)->val.ll_uint = !ft_strcmp(LO, "ll") ? 
			(unsigned long long)L_UINT : 0;
	}
}
