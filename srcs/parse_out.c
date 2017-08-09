/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_out.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynh <thuynh@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/04 15:35:59 by thuynh            #+#    #+#             */
/*   Updated: 2017/08/04 21:29:51 by thuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*parse_out(char **str, t_print *list, va_list ap)
{
	char	*s;

	parse_flags(&list, str);
	if (!(check_format(list)))
		return (NULL);
	get_value(list, ap);
	if (get_output(&list, ap) <= 0)
		return (NULL);
	L>wflags ? reset_wflags(&list) : 0;
	L>prec ? reset_prec(&list) : 0;
	L>lflags ? reset_lflags(&list) : 0;
	if (!(s = ft_strchr(*str, L>format)))
		return (NULL);
	L>format = 0;
	return (s);
}
