/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynh <thuynh@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/04 15:15:21 by thuynh            #+#    #+#             */
/*   Updated: 2017/08/07 11:53:01 by thuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_printf(const char *format, ...)
{
	va_list			ap;
	char			*str;
	static t_print	list;

	va_start(ap, format);
	str = (char *)format;
	ft_memset(&list, 0, sizeof(t_print));
	while (*str)
	{
		while (*str && *str != '%')
		{
			ft_putchar (*str);
			list.pf_len++;
			str++;
			if (!*str)
				return (list.pf_len);
		}
		str++;
		if (!(str = parse_out(&str, &list, ap)))
			return (-1);
		str++;
	}
	free(str);
	va_end(ap);
	return (list.pf_len);
}
