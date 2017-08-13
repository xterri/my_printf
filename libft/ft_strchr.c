/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/09 09:57:41 by thuynh            #+#    #+#             */
/*   Updated: 2017/08/12 19:06:17 by thuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	char	*cpy_s;

	i = 0;
	if (!s || c == '\0')
		return (NULL);
	cpy_s = (char *)s;
	while (cpy_s[i])
	{
		if (cpy_s[i] == c)
			return (&cpy_s[i]);
		i++;
	}
	if (c == '\0')
		return (&cpy_s[i]);
	return (NULL);
}
