/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynh <thuynh@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/03 09:28:04 by thuynh            #+#    #+#             */
/*   Updated: 2017/08/11 17:06:46 by thuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_digits_base(intmax_t val, int base)
{
	size_t	digits;

	digits = 1;
	while (val >= (intmax_t)base)
	{
		digits++;
		val /= base;
	}
	return (digits);
}

char	*ft_itoa_base(intmax_t val, int base)
{
	int		neg;
	char	*str;
	size_t	d;

	neg = val < 0 ? 1 : 0;
	val = neg ? val * -1 : val;
	d = ft_digits_base(val, base);
	if (!(str = ft_strnew(d)))
		return (NULL);
	str[d + neg] = '\0';
	while (d-- > 0)
	{
		str[d + neg] = (val % base) + (val % base > 9 ? 'a' - 10 : '0');
		val /= base;
	}
	neg ? str[0] = '-' : 0;
	return (str);
}
