/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_output.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynh <thuynh@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/04 21:18:12 by thuynh            #+#    #+#             */
/*   Updated: 2017/08/04 21:35:34 by thuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		get_output(t_print **list)
{
/*
	if (L>>format == 'c')
		return (c_output(list));
	if (L>>format == 'C')
		return (C_output(list));
	if (L>>format == '%')
		return (pt_output(list));
*/
	if (L>>format == 'd' || L>>format == 'i')
		return (di_output(list));
/*
	if (L>>format == 'D')
		return (D_output(list));
	if (L>>format == 's')
		return (s_output(list));
	if (L>>format == 'S')
		return (S_output(list));
	if (L>>format == 'p')
		return (p_output(list));
	if (L>>format == 'u')
		return (u_output(list));
	if (L>>format == 'U')
		return (U_output(list));
	if (L>>format == 'o')
		return (o_output(list));
	if (L>>format == 'O')
		return (O_output(list));
	if (L>>format == 'x')
		return (x_output(list));
	if (L>>format == 'X')
		return (X_output(list));
*/
	return (0);
}

