/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   n_output.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynh <thuynh@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/16 17:48:08 by thuynh            #+#    #+#             */
/*   Updated: 2017/08/16 17:54:57 by thuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		n_output(t_print **list)
{
	write(1, &F, 1);
	puts("working on it");
	// determine size of n_ptr or malloc a number of space into it
		// realloc space if not enough? 
	// store LEN into N_PTR
		// add # of characters read each time so just updating it?
		// or need a new array index/block for each time %n is called?
	// handles precision and/or min_w and flags as well?
	return (1);
}
