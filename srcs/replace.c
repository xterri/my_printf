/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynh <thuynh@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 10:03:26 by thuynh            #+#    #+#             */
/*   Updated: 2017/08/14 10:53:18 by thuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	replace(int *flags, char find, char replace)
{
	ssize_t	i;

	i = sizeof(flags) / 4;
	while (--i >= 0)
		if (flags[i] == find)
			flags[i] = replace;
}
