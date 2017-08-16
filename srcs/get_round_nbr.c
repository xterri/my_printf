/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_round_nbr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynh <thuynh@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/16 09:30:52 by thuynh            #+#    #+#             */
/*   Updated: 2017/08/16 09:33:38 by thuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

double	get_round_nbr(ssize_t prec)
{
	int		i;
	double	round;

	i = 0;
	round = 1;
	while (i < prec)
	{
		round /= 10;
		i++;
	}
	return (round);
}
