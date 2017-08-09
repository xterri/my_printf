/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_format.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynh <thuynh@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/04 16:23:53 by thuynh            #+#    #+#             */
/*   Updated: 2017/08/04 16:26:43 by thuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		check_format(t_print **list)
{
	return ((L>>format != 's' && L>>format != 'S' && L>>format != 'c' && 
			L>>format != 'C' && L>>format != 'd' && L>>format != 'D' && 
			L>>format != 'p' && L>>format != 'o' && L>>format != 'O' && 
			L>>format != 'u' && L>>format != 'U' && L>>format != 'i' && 
			L>>format != 'x' && L>>format != 'X' && L>>format != '%') ? 0 : 1);
}
