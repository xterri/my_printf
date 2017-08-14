/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynh <thuynh@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 10:56:07 by thuynh            #+#    #+#             */
/*   Updated: 2017/08/13 17:09:00 by thuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <wchar.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

void		ft_bzero(void *s, size_t n);
size_t		ft_digits(intmax_t n);
char		*ft_itoa_base(intmax_t val, int base);
void		*ft_memalloc(size_t size);
void		*ft_memset(void *s, int c, size_t n);
void		ft_putchar(char c);
void		ft_putnbr(intmax_t n);
void		ft_putstr(char const *s);
char		*ft_strchr(const char *s, int c);
int			ft_strcmp(const char *s1, const char *s2);
size_t		ft_strlen(const char *s);
int			ft_strncmp(const char *s1, const char *s2, size_t n);
char		*ft_strnew(size_t size);
size_t		ft_wcslen(const wchar_t *s);

#endif
