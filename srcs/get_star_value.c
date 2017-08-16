/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_star_value.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynh <thuynh@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 14:18:35 by thuynh            #+#    #+#             */
/*   Updated: 2017/08/15 20:15:00 by thuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	find_prec_index(char *str, ssize_t *prec)
{
	ssize_t	i;

	i = -1;
	while (str[++i])
	{
		if (str[i] == '.')
		{
			*prec = i;
			return ;
		}
	}
}

void		get_star_value(t_print **list, char *str, va_list ap)
{
	ssize_t	prec;
	ssize_t	i;

	i = -1;
	find_prec_index(str, &prec);
	while (str[++i] && str[i] != F)
	{
		if (str[i] == '*')
		{
			TMP = va_arg(ap, ssize_t);
			if (P && prec < i)
			{
				TMP < 0 && (F == 's' || F == 'S') ? TMP = -TMP : 0;
				PNB = TMP;
			}
			else if (i <= prec)
			{
				TMP < 0 ? WO[WF++] = '-' : 0;
				TMP < 0 ? TMP = -TMP : 0;
				MIN = TMP;
			}
		}
	}
}
