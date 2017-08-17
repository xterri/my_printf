/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_output.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynh <thuynh@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/04 21:18:12 by thuynh            #+#    #+#             */
/*   Updated: 2017/08/16 17:45:53 by thuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		get_output(t_print **list)
{
	if (F == 'c' || F == 'C')
		return (c_output(list));
	if (F == 's')
		return (s_output(list));
	if (F == 'S')
		return (ls_output(list));
	if (F == '%')
		return (pt_output(list));
	if (F == 'd' || F == 'i' || F == 'D')
		return (di_output(list));
	if (F == 'n')
		return (n_output(list));
	if (F == 'p')
		return (p_output(list));
	if (F == 'o' || F == 'O')
		return (o_output(list));
	if (F == 'u' || F == 'U')
		return (u_output(list));
	if (F == 'x' || F == 'X')
		return (x_output(list));
	if (F == 'f' || F == 'F')
		return (f_output(list));
	return (0);
}
