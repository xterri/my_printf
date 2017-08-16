/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_star_value.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynh <thuynh@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 14:18:35 by thuynh            #+#    #+#             */
/*   Updated: 2017/08/15 19:17:27 by thuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	get_star_value(t_print **list, char *str, va_list ap)
{
	ssize_t	prec;
	ssize_t	i;

	i = -1;
	prec = 0;
	while (str[++i] && str[i] != F)
	{
		if (str[i] == '*')
		{
			TMP = va_arg(ap, ssize_t);
			if (!P || i <= prec)
			{
				TMP < 0 ? WO[WF++] = '-' : 0;
				TMP < 0 ? TMP = -TMP : 0;
				MIN = TMP;
			}
			else if (P && prec <= i)
			{
				TMP < 0 && (F == 's' || F == 'S') ? TMP = -TMP : 0;
				PNB = TMP;
			}
		}
		else if (str[i] == '.')
			prec = i;
	}
}
