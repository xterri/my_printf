/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_digits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/17 10:07:43 by thuynh            #+#    #+#             */
/*   Updated: 2017/08/09 16:27:10 by thuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_digits(intmax_t n)
{
	size_t		len;
	intmax_t	n_cpy;

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
