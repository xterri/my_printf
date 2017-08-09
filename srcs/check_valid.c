/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_valid.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynh <thuynh@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/04 21:37:48 by thuynh            #+#    #+#             */
/*   Updated: 2017/08/04 21:50:53 by thuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		check_valid(t_print **list, char c)
{
	if (c == 'c' || c == '%' || c == 's' || c == 'p')
	{
		if (L>>wflags > 1 || L>>lflags > 1 || f_exists(list, '+') || 
			f_exists(list, ' ') || f_exists(list, '0') || f_exists(list, '#'))
			return (0);
		if (c == 'p')
			return (L>>lflags || L>>p_nb ? 0 : 1);
		if (L>>lflags && ft_strcmp(L>>lopt, "l"))
			return (c != 'c' && L>>p_nb ? 0 : 1);
	}
	else if (c == 'd')
		return (f_exists(list, '#') || (f_exists(list, '+') && 
				f_exists(list, ' ')) || (f_exists(list, '0') &&
				f_exists(list, '-')) ? 0 : 1);
	else if (c == 'o' || c == 'O')
		return (f_exists(list, '+') || f_exists(list, ' ') ? 0 : 1);
	return (1);
}

