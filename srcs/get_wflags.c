/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_wflags.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynh <thuynh@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/04 16:15:16 by thuynh            #+#    #+#             */
/*   Updated: 2017/08/17 12:15:51 by thuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		get_wflags(t_print **list, char **s, int index)
{
	int		i;
	int		n;
	char	*str;

	i = 0;
	n = sizeof(WO) / 4;
	str = *s;
	while (str[index] && i < n && str[index] != '.' && (str[index] == '+' || 
			str[index] == '-' || str[index] == ' ' || str[index] == '0' || 
			str[index] == '#' || str[index] == '*'))
	{
		WF++;
		WO[i] = str[index];
		i++;
		index++;
	}
	return (index);
}
