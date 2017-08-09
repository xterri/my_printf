/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_wflags.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynh <thuynh@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 10:34:04 by thuynh            #+#    #+#             */
/*   Updated: 2017/08/07 14:09:50 by thuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	put_wflags(t_print **list, size_t min)
{
	if (f_exists(list, '0'))
		while (min-- > 0)
			LEN += write(1, "0", 1);
	else
		while (min-- > 0)
			LEN += write(1, " ", 1);
}
