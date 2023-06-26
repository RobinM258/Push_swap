/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romartin <romartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 09:43:26 by romartin          #+#    #+#             */
/*   Updated: 2023/05/30 14:46:47 by romartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h" 

int				ft_isspace(char c);
static long int	int_(const char *str);

void	long_verif(const char *str)
{
	int	i;

	i = 0;
	if (ft_strlen(str) > 11)
	{
		error(-1);
	}
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			error(-1);
		i++;
	}
}

void	verif(long int nb)
{
	if (nb > 2147483647 || nb < -2147483648)
	{
		error(-1);
	}
	else
		return ;
}

int	ft_atoi(const char *str, t_value	*value)
{
	ft_value(value);
	value->nb_min = ft_atoi_bis(str, value);
	value->minus = value->nb_min;
	while (value->nb_min > 0)
	{
		str++;
		value->nb_min--;
	}
	while (str[++value->j])
	{
		if (str[value->j] < '0' && str[value->j] > '9')
		{
			ft_printf("Error\n");
			exit(EXIT_FAILURE);
		}
	}
	while (*str == '0')
		str++;
	long_verif(str);
	if (value->minus % 2 != 0)
		value->signe = -1;
	value->nb = int_(str) * value->signe;
	verif(value->nb);
	value->signe = value->nb;
	return (value->signe);
}

static long int	int_(const char *str)
{		
	int			i;
	long int	result;

	i = 0;
	result = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result);
}

int	ft_isspace(char c)
{
	return (c == '\t'
		|| c == '\n'
		|| c == '\v'
		|| c == '\f'
		|| c == '\r'
		|| c == ' ');
}
