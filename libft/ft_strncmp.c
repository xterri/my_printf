/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/09 14:55:35 by thuynh            #+#    #+#             */
/*   Updated: 2017/06/12 15:04:27 by thuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*cpy_s1;
	unsigned char	*cpy_s2;

	i = 0;
	cpy_s1 = (unsigned char *)s1;
	cpy_s2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (cpy_s1[i] == cpy_s2[i] && i < n)
	{
		if (i == n - 1 || (!cpy_s1[i] && !cpy_s2[i]))
			return (0);
		i++;
	}
	return (cpy_s1[i] - cpy_s2[i]);
}
