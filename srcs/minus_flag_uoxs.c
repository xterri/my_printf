/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minus_flag_uoxs.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynh <thuynh@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 10:17:15 by thuynh            #+#    #+#             */
/*   Updated: 2017/08/11 10:38:43 by thuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	minus_flag_uoxs(t_print **list, char *str, size_t len, char format)
{
	size_t	i;

	if (format == 'u')
	{
		PNB ? prec_fill(list, PNB) : 0;
		LEN += write(1, str, len);
	}
	else if (format == 'o')
	{
		!PNB && str[0] != '0' && f_exists(list, '#') ? 
			LEN += write(1, "0", 1) : 0;
		PNB ? prec_fill(list, PNB) : 0;
		LEN += write(1, str, len);
	}
	else if (format == 'x')
	{
		if (f_exists(list, '#'))
			LEN += F == 'x' ? write(1, "0x", 2) : write(1, "0X", 2);
		PNB ? prec_fill(list, PNB) : 0;
		LEN += write(1, str, len);
	}
	else if (format == 's')
	{
		i = 0;
		while (str[i] && i < PNB)
			LEN += write(1, &str[i++], 1);
	}
}
