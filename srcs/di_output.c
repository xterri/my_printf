/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   di_output.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynh <thuynh@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/04 21:35:52 by thuynh            #+#    #+#             */
/*   Updated: 2017/08/04 22:07:07 by thuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		di_output(t_print **list)
{
	size_t digits;

	
	if (!(check_valid(list, 'd')))
		return (-1);
	L>>lflags ? convert_ilen(L>>lopt, &val) : 0;
	
}
