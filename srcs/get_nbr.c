/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_nbr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynh <thuynh@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/04 16:03:52 by thuynh            #+#    #+#             */
/*   Updated: 2017/08/04 16:06:55 by thuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		get_nbr(size_t *store, char **s, int index)
{
	while (*s[index] && *s[index] >= '0' && *s[index] <= '9')
	{
		*store = (*store) * 10 + (*s[index] - '0');
		index++;
	}
	return (index);
}
