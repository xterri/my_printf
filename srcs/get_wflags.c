/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_wflags.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynh <thuynh@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/04 16:15:16 by thuynh            #+#    #+#             */
/*   Updated: 2017/08/04 16:21:07 by thuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		get_wflags(t_print **list, char **s, int index)
{
	int		i;
	
	i = 0;
	while (*s[index] && i < 2 && (*s[index] == '+' || *s[index] == '-' ||
				*s[index] == ' ' || *s[index] == '0' || *s[index] == '#'))
	{
		L>>wflags++;
		L>>wopts[i] = *s[index];
		i++;
		index++;
	}
	return (index);
}
