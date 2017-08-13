/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minus_flag_s.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynh <thuynh@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/13 11:27:34 by thuynh            #+#    #+#             */
/*   Updated: 2017/08/13 12:39:36 by thuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	minus_flag_s(t_print **list, void *str, char format)
{
	char	*s;
	wchar_t	*ws;
	ssize_t	i;

	i = 0;
	if (format == 's')
	{
		s = (char *)str;
		while (s[i] && i < PNB)
			LEN += write(1, &s[i++], 1);
	}
	else if (format == 'S')
	{
		ws = (wchar_t *)str;
		while (ws[i] && i < PNB)
			LEN += write(1, &ws[i++], 1);
	}
}
