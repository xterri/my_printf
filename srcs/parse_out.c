/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_out.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynh <thuynh@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/04 15:35:59 by thuynh            #+#    #+#             */
/*   Updated: 2017/08/15 18:52:38 by thuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*parse_out(char **str, t_print *list, va_list ap)
{
	char	*s;

	parse_flags(&list, str);
	if (!(check_format(&list)))
	{
		list->min_w && !f_exists(&list, '-') ?
			put_wflags(&list, list->min_w - 1) : 0;
		list->pf_len += list->format ? write(1, &list->format, 1) : 0;
		list->min_w && f_exists(&list, '-') ?
			put_wflags(&list, list->min_w - 1) : 0;
	}
	else
	{
		f_exists(&list, '~') ? va_arg(ap, ssize_t) : 0;
		f_exists(&list, '*') ? get_star_value(&list, *str, ap) : 0;
		list->format != '%' ? get_values(&list, ap) : 0;
		get_output(&list);
	}
	list->wflags || list->min_w || list->neg ? reset_wflags(&list) : 0;
	list->prec ? reset_prec(&list) : 0;
	list->lflags ? reset_lflags(&list) : 0;
	if (!(s = ft_strchr(*str, list->format)))
		return (NULL);
	list->format = 0;
	return (s);
}
