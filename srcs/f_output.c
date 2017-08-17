/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_output.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynh <thuynh@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 14:21:15 by thuynh            #+#    #+#             */
/*   Updated: 2017/08/16 17:23:51 by thuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		f_output(t_print **list)
{
	char	*tmp;
	ssize_t	i;
	ssize_t	f_len;

	i = -1;
	!P ? PNB = 6 : 0;
	VAL_DBL += get_round_nbr(PNB);
	tmp = ITOA((uintmax_t)VAL_DBL, U_STR, 10);
	f_len = ft_strlen(tmp) + PNB;
	FLT = ft_strnew(f_len);
	while (tmp[++i])
		FLT[i] = tmp[i];
	free_str(&tmp);
	PNB ? FLT[i] = '.' : 0;
	while (++i <= f_len && PNB)
	{
		VAL_DBL -= (uintmax_t)VAL_DBL;
		VAL_DBL *= 10;
		FLT[i] = (uintmax_t)VAL_DBL + '0';
	}
	FLT[i] = '\0';
	MIN = MIN >= f_len ? MIN - f_len : 0;
	minus_flag_f(list, FLT, VAL_DBL);
	free_str(&FLT);
	return (1);
}
