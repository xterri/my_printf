/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynh <thuynh@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 10:56:07 by thuynh            #+#    #+#             */
/*   Updated: 2017/08/07 14:23:57 by thuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <string.h>
# include <unistd.h>

unsigned int	ft_digits(long long n);
void			*ft_memset(void *s, int c, size_t n);
void			ft_putchar(char c);
void			ft_putnbr(long long n);
void			ft_putstr(char const *s);
char			*ft_strchr(const char *s, int c);
int				ft_strcmp(const char *s1, const char *s2);
size_t			ft_strlen(const char *s);

#endif
