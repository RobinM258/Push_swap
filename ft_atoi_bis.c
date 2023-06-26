/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_bis.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romartin <romartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 15:51:30 by romartin          #+#    #+#             */
/*   Updated: 2023/06/26 14:05:26 by romartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_atoi_bis(const char *str, t_value	*value)
{
	while (ft_isspace(*str))
	{
		str++;
	}
	if ((*str == '+' && str[1]) || (*str == '-' && str[1]))
	{
		if (*str == '-')
			value->nb_min++;
		str++;
	}
	return (value->nb_min);
}

void	ft_value(t_value	*value)
{
	value->j = -1;
	value->signe = 1;
	value->nb_min = 0;
}
