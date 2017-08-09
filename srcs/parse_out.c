/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_out.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynh <thuynh@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/04 15:35:59 by thuynh            #+#    #+#             */
/*   Updated: 2017/08/08 11:48:05 by thuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*parse_out(char **str, t_print *list, va_list ap)
{
	char	*s;

	parse_flags(&list, str);
//	printf("\n\nWF: %d\tWO1: %c\tWO2: %c\tP: %d\tPNB: %zu\tLO: %s\tLF: %d\tMIN: %zu\tF: %c\n", list->wflags, list->wopts[0], list->wopts[1], list->prec, list->p_nb, list->lopt, list->lflags, list->min_w, list->format);
	if (!(check_format(&list)))
		return (NULL);
	get_values(&list, ap);
	list->lflags ? convert_lflags(&list) : 0;
	if (get_output(&list) <= 0) // need to modify get_output later
		return (NULL);
	list->wflags ? reset_wflags(&list) : 0;
	list->prec ? reset_prec(&list) : 0;
	list->lflags ? reset_lflags(&list) : 0;
	if (!(s = ft_strchr(*str, list->format)))
		return (NULL);
	list->format = 0;
	return (s);
}
