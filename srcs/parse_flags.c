/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_flags.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynh <thuynh@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/04 15:45:53 by thuynh            #+#    #+#             */
/*   Updated: 2017/08/04 16:21:58 by thuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	parse_flags(t_print **list, char **s)
{
	int		i;
	int		j;
	
	i = 0;
	i = get_wflags(list, *s, i);
	i = get_nbr(&(L>>min_w), *s, i);
	L>>prec = str[i++] == '.' ? 1 : 0;
	i = get_nbr(&(L>>p_nb), *s, i);
	j = 0;
	while (*s[i] && (*s[i] == 'l' || *s[i] == 'j' || 
			*s[i] == 'h' || *s[i] == 'z'))
		L>>lopt[j++] = *s[i++];
	L>>lopt[j] = '\0';
	j > 0 ? L>>lflags = ft_strlen(L>>lopt) : 0;
	L>>format = s[i];
}
