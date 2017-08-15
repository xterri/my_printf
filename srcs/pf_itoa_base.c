/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynh <thuynh@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 18:57:17 by thuynh            #+#    #+#             */
/*   Updated: 2017/08/14 17:58:18 by thuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	ft_pf_digits(uintmax_t val, int base)
{
	size_t ret;

	ret = 1;
	while (val >= (uintmax_t)base)
	{
		val /= base;
		ret++;
	}
	return (ret);
}

char			*pf_itoa_base(uintmax_t val, char *key, int base)
{
	char	*str;
	size_t	digits;

	digits = ft_pf_digits(val, base);
	if (!(str = ft_strnew(digits)))
		return (NULL);
	str[digits] = '\0';
	while (digits-- > 0)
	{
		str[digits] = key[(val % base)];
		val /= base;
	}
	return (str);
}
