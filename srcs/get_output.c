/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_output.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynh <thuynh@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/04 21:18:12 by thuynh            #+#    #+#             */
/*   Updated: 2017/08/09 14:51:21 by thuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		get_output(t_print **list)
{
	if (F == 'c')
		return (c_output(list));
	if (F == 's')
		return (s_output(list));
/*
	if (F == 'C')
		return (C_output(list));
*/
	if (F == '%')
		return (pt_output(list));
	if (F == 'd' || F == 'i')
		return (di_output(list));
/*
	if (F == 'D')
		return (D_output(list));

	if (F == 'S')
		return (S_output(list));
	if (F == 'p')
		return (p_output(list));
	if (F == 'u')
		return (u_output(list));
	if (F == 'U')
		return (U_output(list));
	if (F == 'o')
		return (o_output(list));
	if (F == 'O')
		return (O_output(list));
	if (F == 'x')
		return (x_output(list));
	if (F == 'X')
		return (X_output(list));
*/
	return (0);
}

