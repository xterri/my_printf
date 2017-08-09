/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_flags.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynh <thuynh@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/04 15:45:53 by thuynh            #+#    #+#             */
/*   Updated: 2017/08/07 15:25:21 by thuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	parse_flags(t_print **list, char **s)
{
	int		i;
	int		j;
	char	*str;

	str = *s;
	i = 0;
	i = get_wflags(list, s, i);
	i = get_nbr(&(MIN), s, i);
	str[i] == '.' ? P = 1 && i++ : 0;
	i = get_nbr(&(PNB), s, i);
	j = 0;
	while (str[i] && (str[i] == 'l' || str[i] == 'j' ||
			str[i] == 'h' || str[i] == 'z'))
		LO[j++] = str[i++];
	LO[j] = '\0';
	j > 0 ? LF = ft_strlen(LO) : 0;
	F = str[i];
}
