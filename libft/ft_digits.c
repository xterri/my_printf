/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_digits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/17 10:07:43 by thuynh            #+#    #+#             */
/*   Updated: 2017/08/07 11:12:55 by thuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_digits(long long n)
{
	unsigned int	len;
	long long		n_cpy;

	len = 0;
	n_cpy = n;
	if (n_cpy <= 0)
	{
		len++;
		n_cpy = -n_cpy;
	}
	while (n_cpy != 0)
	{
		len++;
		n_cpy /= 10;
	}
	return (len);
}
