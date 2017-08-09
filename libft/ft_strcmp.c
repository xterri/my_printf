/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/09 14:45:13 by thuynh            #+#    #+#             */
/*   Updated: 2017/06/15 15:35:40 by thuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	size_t			i;
	unsigned char	*cpy_s1;
	unsigned char	*cpy_s2;

	i = 0;
	cpy_s1 = (unsigned char *)s1;
	cpy_s2 = (unsigned char *)s2;
	while (cpy_s1[i] == cpy_s2[i])
	{
		if (!cpy_s1[i] && !cpy_s2[i])
			return (0);
		i++;
	}
	return (cpy_s1[i] - cpy_s2[i]);
}
