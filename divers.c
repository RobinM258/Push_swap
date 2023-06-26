/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   divers.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romartin <romartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 16:04:10 by romartin          #+#    #+#             */
/*   Updated: 2023/06/26 15:07:02 by romartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	*freetab(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return (NULL);
}

void	error(int i)
{
	(void) i;
	ft_printf("ERROR\n");
	exit(EXIT_FAILURE);
}

void	split(t_number **stack_a, int argc, t_value *value, char **av)
{
	char	**split;

	value->ac = 1;
	if (argc <= 1)
		return ;
	value->i = 0;
	while (value->ac < argc)
	{
		value->split = -1;
		split = ft_split(av[value->ac], ' ');
		while (&split[value->i][0] != (void *)0)
		{
			ft_add_back(stack_a, ft_atoi(&split[value->i][0], value));
			value->i++;
		}
		value->ac++;
		value->max += value->i;
		value->i = 0;
		freetab(split);
	}
}

t_number	*ft_lst_new(int content)
{
	t_number	*tmp;

	tmp = malloc(sizeof(t_number));
	if (!tmp)
		exit(EXIT_FAILURE);
	tmp->num = content;
	tmp->index = -1;
	tmp->next = NULL;
	return (tmp);
}

t_number	*ft_lstlast(t_number *lst)
{
	while (lst->next)
	{
		if (lst->next == NULL)
			return (lst);
		lst = lst->next;
	}
	return (lst);
}
