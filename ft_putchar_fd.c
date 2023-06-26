/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romartin <romartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 11:48:58 by romartin          #+#    #+#             */
/*   Updated: 2023/05/29 14:39:26 by romartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_putchar_fd(char c, int fd, int *error)
{
	int	i;

	i = 0;
	if (*error != -1)
		i += write(fd, &c, 1);
	if (i == -1)
		*error = -1;
	return (1);
}
