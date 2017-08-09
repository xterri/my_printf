/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_valid.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynh <thuynh@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/04 21:37:48 by thuynh            #+#    #+#             */
/*   Updated: 2017/08/09 01:49:37 by thuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		check_valid(t_print **list, char c)
{
	if (c == 'c' || c == '%' || c == 's' || c == 'p')
	{
		if (WF > 1 || LF > 1 || f_exists(list, '+') || 	f_exists(list, ' ') || 
				f_exists(list, '0') || f_exists(list, '#'))
			return (0);
		if (c == 'p')
			return (LF || PNB ? 0 : 1);
		if (LF && ft_strcmp(LO, "l"))
			return (c != 'c' && PNB ? 0 : 1);
	}
	else if (c == 'd')
		return (f_exists(list, '#') || (f_exists(list, '+') && 
				f_exists(list, ' ')) || (f_exists(list, '0') &&
				f_exists(list, '-')) ? 0 : 1);
	else if (c == 'o' || c == 'O')
		return (f_exists(list, '+') || f_exists(list, ' ') ? 0 : 1);
	return (1);
}
